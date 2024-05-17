#include "rectangle.hpp"

#include "gtest/gtest.h"

TEST(ConstructorsTest, testDefault1) {
    EXPECT_NO_THROW (Rectangle* testRectangle = new Rectangle());
}

TEST(ConstructorsTest, testParameter1) {
    EXPECT_NO_THROW (Rectangle* testRectangle = new Rectangle(5, 10));
}

//needs to be created
TEST(ConstructorsTest, testInput1) {

}

TEST(AreaTest, testInt1) {
    Rectangle* testRectangle = new Rectangle(5, 10)
    EXPECT_EQ(testRectangle->area(), 50)
}

TEST(AreaTest, testZero1) {
    Rectangle* testRectangle = new Rectangle(0, 0)
    EXPECT_EQ(testRectangle->area(), 0)
}

//needs to be created
TEST(AreaTest, testInput3) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(PerimeterTest, testInt1) {
    Rectangle* testRectangle = new Rectangle(2, 4)
    EXPECT_EQ(testRectangle->perimeter(), 12)
}

TEST(PerimeterTest, testZero1) {
    Rectangle* testRectangle = new Rectangle(0, 0)
    EXPECT_EQ(testRectangle->perimeter(), 0)
}

//needs to be created
TEST(PerimeterTest, testInput3) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}