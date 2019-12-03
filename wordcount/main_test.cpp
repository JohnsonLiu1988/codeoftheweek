/*
 * main_test.cpp
 *
 *  Created on: Dec 1, 2019
 *      Author: guest
 */

#include "include/wordcount.h"
#include <iostream>
#include "gtest/gtest.h"

class WordCountTest : public ::testing::Test
{
protected:
    // void SetUp() override;

    // void TearDown() override {}

    // WordCount wc1("I'm in a tree.");
    // wordcount::WordCount wc2("/home/guest/develop/wordcount/tmp.txt");
    // wordcount::WordCount wc2("tmp.txt");
};

// TEST_F(WordCountTest, DoesXyz)
// {
    // ASSERT_TRUE(wc1.isWordIncluded("tree"));
// }

TEST_F(WordCountTest, DoesXyz)
{
    wordcount::WordCount wc2("/home/guest/workspace/wordcount/tmp.txt");
    ASSERT_TRUE(wc2.isWordIncluded("tree"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// int main(int argc, char **argv) {
//     wordcount::WordCount wc2("/home/guest/workspace/wordcount/tmp.txt");
//     if (wc2.isWordIncluded("tree"))
//         {
//             std::cout << "yes" << std::endl;
//         }
//     else
//         {
//             std::cout << "no" << std::endl;
//         }

//     return 0;
// }
