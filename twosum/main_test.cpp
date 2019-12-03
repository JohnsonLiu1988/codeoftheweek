#include "include/twosum.h"
#include "gtest/gtest.h"


TEST(TwoSumTest, returnIndex)
{
    twosum::TwoSum ts;
    std::vector<int> inputs{2, 7, 18, 15};
    int target = 9;
    std::vector<int> tmp{0, 1};

    ASSERT_EQ(tmp, ts.getIndex(inputs, target));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

