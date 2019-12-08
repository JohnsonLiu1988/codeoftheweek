/*
 * main_test.cpp
 *
 *  Created on: Dec 5, 2019
 *      Author: guest
 */

#include "include/MedianOfTwoSortedArray.h"
#include "gtest/gtest.h"


TEST(MedianOfTwoSortedArrayTest, returnMedian_2dot0)
{
    medianoftwosortedarray::MedianOfTwoSortedArray m;

    ASSERT_EQ(2.0, m.findMedian(std::vector<int>{1, 3}, std::vector<int>{2}));
}

TEST(MedianOfTwoSortedArrayTest, returnMedian_2dot5)
{
    medianoftwosortedarray::MedianOfTwoSortedArray m;

    ASSERT_EQ(2.5, m.findMedian(std::vector<int>{1, 2}, std::vector<int>{3, 4}));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



