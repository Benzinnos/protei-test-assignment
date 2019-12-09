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

#include <iostream>
#include <string>

namespace EchoClient {

/*!
 * \brief The Worker class Простой обработчик ввода пользователя
 * \details Записываемые данные отправляются в сокет,
 * данные, приходящие с сокета, выводятся пользователю
 */
template<typename T>
// requires write, read
class Worker
{
public:
    /*!
     * \brief Worker
     * \param wrapper DI Обертка над сокетом для клиена
     */
    explicit Worker(T &wrapper)
        : _wrapper(wrapper) { }

    /*!
     * \brief work Основной цикл эхо-клиента
     */
    void work() {
        // Echo cycle
        while (std::cin) {
            std::string input;
            std::getline(std::cin, input);

            _wrapper.write(input);
            std::cout << _wrapper.read()
                      << std::endl
                      << std::endl;
        }
    }

private:
    T &_wrapper;
};

} // namespace EchoClient

#endif // WORKER_H
