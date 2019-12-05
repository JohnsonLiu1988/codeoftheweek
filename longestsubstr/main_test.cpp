/*
 * main_test.cpp
 *
 *  Created on: Dec 5, 2019
 *      Author: guest
 */

#include "include/LongestSubstr.h"
#include "gtest/gtest.h"


TEST(LongestSubstrTest, returnTargetStr_abc)
{
    longestsubstr::LongestSubstr ls;

    ASSERT_STREQ("abc", ls.findLongestSubstr("abcabcbb").c_str());
}

TEST(LongestSubstrTest, returnTargetStr_b)
{
    longestsubstr::LongestSubstr ls;

    ASSERT_STREQ("b", ls.findLongestSubstr("bbbbb").c_str());
}

TEST(LongestSubstrTest, returnTargetStr_wke)
{
    longestsubstr::LongestSubstr ls;

    ASSERT_STREQ("wke", ls.findLongestSubstr("pwwkew").c_str());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



