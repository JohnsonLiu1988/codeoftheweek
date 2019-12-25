/*
 * main_test.cpp
 *
 *  Created on: Dec 5, 2019
 *      Author: guest
 */

#include "include/ZigzagPattern.h"
#include "gtest/gtest.h"


TEST(ZigzagPatternTest, return_PAHNAPLSIIGYIR)
{
    zigzagpattern::ZigzagPattern zp;

    ASSERT_STREQ("PAHNAPLSIIGYIR", zp.converse(std::string("PAYPALISHIRING"), 3).data());
}

TEST(ZigzagPatternTest, return_PINALSIGYAHRPI)
{
    zigzagpattern::ZigzagPattern zp;

    ASSERT_STREQ("PINALSIGYAHRPI", zp.converse(std::string("PAYPALISHIRING"), 4).data());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



