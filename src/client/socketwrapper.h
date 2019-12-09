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

#ifndef SOCKETWRAPPER_H
#define SOCKETWRAPPER_H

#include <string_view>
#include <string>

#include "types.h"
#include "constants.h"

namespace EchoClient {

/*!
 * \brief The SocketWrapper class Простая обертка над сокетом для клиента
 */
class SocketWrapper
{
public:
    /*!
     * \brief SocketWrapper
     * \param addr IP - Адрес сервера
     * \param port Порт сервера
     * \param type Тип используемого протокола
     */
    SocketWrapper(std::string_view addr, unsigned short port,
                  SharedTypes::ConnectionType type);
    ~SocketWrapper();

    SocketWrapper(const SocketWrapper&) = delete;
    SocketWrapper& operator=(const SocketWrapper&) = delete;
    SocketWrapper(const SocketWrapper&&) noexcept = delete;
    SocketWrapper& operator=(const SocketWrapper&&) noexcept = delete;

    /*!
     * \brief read Чтение данных из сокета
     * \return Данные из сокета
     */
    std::string read();

    /*!
     * \brief write Запись данных в сокет
     * \param data Записываемые данные
     */
    void write(std::string_view data);

private:
    int _socketFD = -1;
    SharedTypes::MessageBuffer _recvBuffer;
};

} // namespace EchoClient

#endif // SOCKETWRAPPER_H
