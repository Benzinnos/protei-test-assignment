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

#include "socketwrapper.h"

// system socket
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace EchoClient;
using SharedTypes::ConnectionType;
using SharedTypes::Errors;

SocketWrapper::SocketWrapper(std::string_view addr,
                             unsigned short port, ConnectionType type)
{
    switch (type) {
    case ConnectionType::tcp:
        _socketFD = socket(AF_INET, SOCK_STREAM, IPPROTO_IP);
        break;
    case ConnectionType::udp:
        _socketFD = socket(AF_INET, SOCK_DGRAM, IPPROTO_IP);
        break;
    default:
        throw Errors::invalidProtocol;
    }

    // RAII
    try {

        if (_socketFD == -1) {
            throw Errors::cantOpenSocket;
        }

        sockaddr_in sockAddr{ };
        sockAddr.sin_family = AF_INET;
        sockAddr.sin_port = htons(port);

        if (auto res = inet_pton(
                AF_INET,
                std::string(addr).c_str(),
                &sockAddr.sin_addr);
            res < 0) {
            throw Errors::invalidProtocol;
        } else if (!res) {
            throw Errors::invalidAddr;
        }

        if (connect(_socketFD,
                    reinterpret_cast<sockaddr*>(&sockAddr),
                    sizeof (sockAddr)) == -1) {
            throw Errors::connectionError;
        }

    } catch (...) {
        close(_socketFD);
        throw;
    }
}

SocketWrapper::~SocketWrapper()
{
    shutdown(_socketFD, SHUT_RDWR);
    close(_socketFD);
}

// Чтение данных из сокета
std::string SocketWrapper::read()
{
    if (recv(_socketFD, std::begin(_recvBuffer),
             _recvBuffer.size(), 0) == -1) {
        throw Errors::readError;
    }

    return std::string(std::begin(_recvBuffer));
}

// Запись данных в сокет
void SocketWrapper::write(std::string_view data)
{
    if (send(_socketFD, std::string(data).c_str(),
             data.length() + 1, 0) == -1) { //null-term
        throw Errors::writeError;
    }
}
