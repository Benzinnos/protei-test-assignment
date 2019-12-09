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

#ifndef TST_CLIENT_H
#define TST_CLIENT_H

#include <gtest/gtest.h>

#include "types.h"
#include "constants.h"
#include "client/socketwrapper.h"

using namespace testing;

class Tst_Client : public Test {
public:
    explicit Tst_Client() {

    }
};

TEST_F(Tst_Client, invalidProtocol)
{
    bool foundException = false;
    try {
        EchoClient::SocketWrapper wr("127.0.0.1", 1100, SharedTypes::ConnectionType::unsupported);
    } catch (SharedTypes::Errors &err) {
        ASSERT_EQ(err, SharedTypes::Errors::invalidProtocol);
        foundException = true;
    }

    ASSERT_TRUE(foundException);
}

TEST_F(Tst_Client, invalidAddr)
{
    bool foundException = false;
    try {
        EchoClient::SocketWrapper wr("0", 1100, SharedTypes::ConnectionType::tcp);
    } catch (SharedTypes::Errors &err) {
        ASSERT_EQ(err, SharedTypes::Errors::invalidAddr);
        foundException = true;
    }

    ASSERT_TRUE(foundException);
}

TEST_F(Tst_Client, readError)
{
    bool foundException = false;
    try {
        EchoClient::SocketWrapper wr("127.0.0.1", 1100, SharedTypes::ConnectionType::tcp);
        wr.read();
    } catch (SharedTypes::Errors &err) {
        ASSERT_EQ(err, SharedTypes::Errors::connectionError);
        foundException = true;
    }

    ASSERT_TRUE(foundException);
}

#endif // TST_CLIENT_H
