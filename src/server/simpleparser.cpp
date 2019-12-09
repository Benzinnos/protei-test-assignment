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

#include "simpleparser.h"

#include <iostream>
#include <algorithm>
#include <numeric>
#include <regex>

using namespace EchoServer;

// Получение набора чисел (0 - 9) из строки
ParseNumbers SimpleParser::getNumbers(std::string_view data) noexcept
{
    ParseNumbers returnValue;
    std::string d(data);

    auto reg = std::regex("\\d");

    std::transform(std::sregex_iterator(std::begin(d), std::end(d), reg),
                   std::sregex_iterator(),
                   std::inserter(returnValue, returnValue.begin()),
                   [](const std::smatch& i){ return std::stoi(i.str()); });

    return returnValue;
}

// Получение суммы из набора чисел
long long SimpleParser::getSum(const ParseNumbers &numbers) noexcept
{
    return std::accumulate(std::begin(numbers), std::end(numbers), 0);
}

// Получение минимального и максимального значения из набора
ParseMinMax SimpleParser::getMinMax(const ParseNumbers &numbers) noexcept
{
    if (numbers.empty()) {
        return ParseMinMax(0, 0);
    }

    return ParseMinMax(*numbers.rbegin(), *numbers.begin());
}

// Обработка данных от клиента
void SimpleParser::parse(std::string_view data) noexcept
{
    auto parsedData = getNumbers(data);

    // Sum
    std::cout << "Sum: " << getSum(parsedData) << std::endl;

    // Elements
    for (auto &&i : parsedData) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Min max
    auto [min, max] = getMinMax(parsedData);
    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl << std::endl;
}
