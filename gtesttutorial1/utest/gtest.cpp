#include <gtest/gtest.h>
#include "lib44.h"

TEST(lib44test, printing) {
    ASSERT_EQ("44", ret4s());
}



int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
