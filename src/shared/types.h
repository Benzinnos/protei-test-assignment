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

#ifndef TYPES_H
#define TYPES_H

#include <array>
#include <string>

#include "constants.h"

namespace SharedTypes {

/*!
 * Буфер приемника сообщений
 */
using MessageBuffer =
    std::array<char, SharedConstants::messageMaxLength>;

/*!
 * \brief The ConnectionType enum Типы протокола клиента
 */
enum class ConnectionType : int {
    tcp,
    udp,
    unsupported,
};

/*!
 * \brief The Errors enum Коды ошибок
 */
enum class Errors : int {
    success,
    invalidProtocol,
    invalidAddr,
    invalidPort,
    cantOpenSocket,
    connectionError,
    readError,
    writeError,
    bindError,
    serverTimeout,
};

/*!
 * \brief errorToString Преобразование кода ошибки в сообщение
 * \param error Код ошибки
 * \return Текстовое описание
 */
constexpr const char *errorToString(Errors error) noexcept {
    switch (error) {
    case Errors::success         : return "Успешно"                     ;
    case Errors::invalidProtocol : return "Некорректный протокол"       ;
    case Errors::invalidAddr     : return "Некорректный адрес"          ;
    case Errors::invalidPort     : return "Некорректный порт"           ;
    case Errors::cantOpenSocket  : return "Не удалось открыть сокет"    ;
    case Errors::connectionError : return "Ошибка соединения"           ;
    case Errors::readError       : return "Ошибка чтения из сокета"     ;
    case Errors::writeError      : return "Ошибка записи в сокет"       ;
    case Errors::bindError       : return "Ошибка привязки сокета"      ;
    case Errors::serverTimeout   : return "Таймаут ожидания соединения" ;
    default                      : return "Неизвестная ошибка"          ;
    }
};

} // namespace SharedTypes

#endif // TYPES_H
