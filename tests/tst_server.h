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

#ifndef TST_SERVER_H
#define TST_SERVER_H

#include <string>

#include <gtest/gtest.h>

#include "types.h"
#include "constants.h"
#include "server/simpleparser.h"

using namespace testing;

class Tst_Server : public Test {
public:
    explicit Tst_Server() {

    }

    std::string mTestData = "12 3 3 test data 5";
};

TEST_F(Tst_Server, testParserGetNumbers)
{
    EchoServer::ParseNumbers num {
        1, 2, 3, 3, 5
    };

    ASSERT_EQ(EchoServer::SimpleParser::getNumbers(mTestData),
              num);
}

TEST_F(Tst_Server, testParserGetSum)
{
    long long sum = 14;

    ASSERT_EQ(EchoServer::SimpleParser::getSum(
                  EchoServer::SimpleParser::getNumbers(mTestData)),
              sum);
}

TEST_F(Tst_Server, testParserGetMinMax)
{
    EchoServer::ParseMinMax minmax { 1, 5 };

    ASSERT_EQ(EchoServer::SimpleParser::getMinMax(
                  EchoServer::SimpleParser::getNumbers(mTestData)),
              minmax);
}

#endif // TST_SERVER_H
