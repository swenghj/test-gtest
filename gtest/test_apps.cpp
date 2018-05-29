#include "../include/apps.h"
#include <gtest/gtest.h>

TEST(AppendStringTest, AddTwoStrings) { 
    ASSERT_EQ("googletest", append_strings("google", "test"));
    ASSERT_EQ("unit test", append_strings("unit ", "test"));    
}
 
TEST(AddIntegerTest, AddTwoIntegers) {
    ASSERT_EQ(5, add_two_integers(2,3));
    ASSERT_EQ(-10, add_two_integers(-4, -6));
}
 
TEST(SquareRootTest, PositiveNumber) {
    ASSERT_EQ(3.0, square_root(9.0));
    ASSERT_EQ(25.4, square_root(645.16));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

