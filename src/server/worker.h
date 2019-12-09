/*
** Copyright 2019 Alexey Grigorev
**
** Licensed under the MIT license:
** http://www.opensource.org/licenses/mit-license.php
**
** Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
** documentation files (the "Software"), to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and
** to permit persons to whom the Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in all copies or substantial portions of
** the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
** THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
** CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

#ifndef WORKER_H
#define WORKER_H

#include <set>
#include <iostream>
#include <algorithm>

// system socket
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fcntl.h>

#include "socketwrapper.h"
#include "types.h"
#include "constants.h"

using SharedTypes::ConnectionType;
using SharedTypes::Errors;

namespace EchoServer {

/*!
 * \brief The Worker class Основной класс сервера
 */
template<typename T>
// requires parse
class Worker
{
public:
    /*!
     * \brief Worker
     * \details Создает сокеты для прослушивания по tcp и приема по udp,
     * а также выполняет управление сокетами tcp
     * \param transformer Преобразователь данных, приходящих на сервер
     * \param port Порт сервера
     */
    explicit Worker(T &transformer, unsigned short port)
        : _transformer(transformer),
          _tcpListener(socket(AF_INET, SOCK_STREAM, IPPROTO_IP)),
          _udpSocket(socket(AF_INET, SOCK_DGRAM, IPPROTO_IP)) {

        if (_tcpListener < 0 || _udpSocket < 0) {
            throw Errors::cantOpenSocket;
        }

        fcntl(_tcpListener, F_SETFL, O_NONBLOCK);
        fcntl(_udpSocket, F_SETFL, O_NONBLOCK);

        struct sockaddr_in addr { };
        addr.sin_family = AF_INET;
        addr.sin_port = htons(port);
        addr.sin_addr.s_addr = INADDR_ANY;

        if (bind(_tcpListener,
                 reinterpret_cast<sockaddr *>(&addr),
                 sizeof(addr)) < 0) {
            throw Errors::bindError;
        }

        if (bind(_udpSocket,
                 reinterpret_cast<sockaddr *>(&addr),
                 sizeof(addr)) < 0) {
            throw Errors::bindError;
        }

        listen(_tcpListener, SharedConstants::serverConnectionsMax);
    }

    ~Worker() {
        shutdown(_tcpListener, SHUT_RDWR);
        for (auto &&i : _tcpClients) {
            shutdown(i, SHUT_RDWR);
        }
    }

    /*!
     * \brief work Основной цикл эхо-сервера
     */
    void work() {
        while(1) {
            fd_set readset;
            FD_ZERO(&readset);
            FD_SET(_tcpListener, &readset);
            FD_SET(_udpSocket, &readset);

            for(auto &&i : _tcpClients) {
                FD_SET(i, &readset);
            }

            timeval timeout {
                SharedConstants::serverTimeout,
                0
            };

            // select требует max fd
            int mx = std::max(_tcpListener, *std::max_element(_tcpClients.begin(), _tcpClients.end()));
            mx = std::max(static_cast<int>(_udpSocket), mx);

            if (select(mx+1, &readset, nullptr, nullptr, &timeout) <= 0) {  //TODO poll
                throw Errors::serverTimeout;
            }

            // notification checker
            if (FD_ISSET(_tcpListener, &readset)) {   // connection request
                if (SocketWrapper sock(accept(_tcpListener, nullptr, nullptr)); sock < 0) {
                    throw Errors::connectionError;
                } else {
                    fcntl(sock, F_SETFL, O_NONBLOCK);
                    _tcpClients.emplace(std::move(sock));
                }
            }

            if (FD_ISSET(_udpSocket, &readset)) {   // UDP
                struct sockaddr_storage addr { };
                socklen_t len = sizeof(addr);

                auto ll = recvfrom(_udpSocket,
                                   std::begin(_recvBuffer), _recvBuffer.size(), 0,
                                   reinterpret_cast<sockaddr *>(&addr), &len);

                sendto(_udpSocket,
                       std::begin(_recvBuffer), ll, 0,
                       reinterpret_cast<sockaddr *>(&addr), len);

                _transformer.parse(std::string(_recvBuffer.begin()));
            }

            for (auto &&it : _tcpClients) {  // TCP
                if (FD_ISSET(it, &readset)) {
                    auto bytes_read = recv(it, std::begin(_recvBuffer), _recvBuffer.size(), 0);

                    if(bytes_read <= 0) {
                        _tcpClients.erase(it);
                        continue;
                    }
                    send(it, std::begin(_recvBuffer), bytes_read, 0);

                    _transformer.parse(std::string(_recvBuffer.begin()));

                }
            }
        }
    }

private:
    T &_transformer;
    SocketWrapper _tcpListener;
    SocketWrapper _udpSocket;
    SharedTypes::MessageBuffer _recvBuffer;
    std::set<SocketWrapper> _tcpClients;
};

} // namespace EchoServer

#endif // WORKER_H
