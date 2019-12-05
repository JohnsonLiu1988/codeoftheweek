/*
 * main_test.cpp
 *
 *  Created on: Dec 5, 2019
 *      Author: guest
 */

#include "include/addtwonumlist.h"
#include "gtest/gtest.h"


TEST(AddTwoNumListTest, checkMergedList)
{
    addtwonumlist::AddTwoNumList l;

    std::list<int> addend{6, 4, 3};
    std::list<int> added{5, 6, 4};

    std::list<int> tmp{1, 1, 8};

    ASSERT_EQ(tmp, l.addLists(addend, added));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



