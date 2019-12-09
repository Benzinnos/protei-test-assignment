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

#include <cstring>
#include <iostream>
#include <sstream>
#include <cstdlib>

#include "socketwrapper.h"
#include "worker.h"
#include "constants.h"
#include "types.h"

using namespace SharedTypes;
using namespace SharedConstants;

int main(int argc, char *argv[]) {
    if (argc <= 2) {
        std::cout << "Использование: "      <<
            " <тип соединения(TCP / UDP)> " <<
            " <адрес> " << "<порт>"         << '\n';

        std::exit(EXIT_FAILURE);
    }

    ConnectionType connection { ConnectionType::unsupported };
    if (!std::strcmp(argv[1], "TCP")) {
        connection = ConnectionType::tcp;
    } else if (!std::strcmp(argv[1], "UDP")) {
        connection = ConnectionType::udp;
    }

    std::string addr(argv[2]);

    unsigned short port { 0 };
    if (argc > 3) {
        if (std::stringstream clargs(argv[3]); !(clargs >> port)) {
            std::cout << errorToString(Errors::invalidPort) << std::endl;
            std::exit(EXIT_FAILURE);
        }
    }

    try {
        EchoClient::SocketWrapper wr(addr, port, connection);
        EchoClient::Worker worker(wr);
        worker.work();

    } catch (Errors &error) {
        std::cerr << SharedTypes::errorToString(error) << std::endl;
        std::perror("");
        std::exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
