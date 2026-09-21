#include <gtest/gtest.h>

#include "include/lib.h"

TEST(test, add_function) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(-5, -5), -10);
}

auto main(int argc, char** argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
