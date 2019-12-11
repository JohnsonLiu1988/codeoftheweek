/*
 * main_test.cpp
 *
 *  Created on: Dec 5, 2019
 *      Author: guest
 */

#include "include/LongestPalindromicSubstr.h"
#include "gtest/gtest.h"


TEST(LongestPalindromicSubstrTest, return_dabad)
{
    longestpalindromicsubstr::LongestPalindromicSubstr l;

    ASSERT_STREQ("dabad", l.findLongestPalindromicSubstr(std::string("dabad")).data());
}

TEST(LongestPalindromicSubstrTest, return_bb)
{
    longestpalindromicsubstr::LongestPalindromicSubstr l;

    ASSERT_STREQ("bb", l.findLongestPalindromicSubstr(std::string("cbbd")).data());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



