#include "../src/rectangle.cpp"

#include "gtest/gtest.h"

TEST(ConstructorsTest, testDefault1) {
    EXPECT_NO_THROW (Rectangle* testRectangle = new Rectangle());
}

TEST(ConstructorsTest, testParameter1) {
    EXPECT_NO_THROW (Rectangle* testRectangle = new Rectangle(5, 10));
}

TEST(ConstructorsTest, testInput1) {
    EXPECT_NO_THROW (Rectangle* testRectangle = new Rectangle(0, 0));
}

TEST(AreaTest, testInt1) {
    Rectangle* testRectangle = new Rectangle(5, 10)
    EXPECT_EQ(testRectangle->area(), 50);
}

TEST(AreaTest, testZero1) {
    Rectangle* testRectangle = new Rectangle(0, 0)
    EXPECT_EQ(testRectangle->area(), 0);
}

TEST(AreaTest, testInput3) {
    Rectangle* testRectangle = new Rectangle(2, 2);
    EXPECT_EQ(testRectangle->area(), 4)
}

TEST(PerimeterTest, testInt1) {
    Rectangle* testRectangle = new Rectangle(2, 4);
    EXPECT_EQ(testRectangle->perimeter(), 12)
}

TEST(PerimeterTest, testZero1) {
    Rectangle* testRectangle = new Rectangle(0, 0);
    EXPECT_EQ(testRectangle->perimeter(), 0)
}

TEST(PerimeterTest, testInput3) {
    Rectangle* testRectangle = new Rectangle(1, 1);
    EXPECT_EQ(testRectangle->perimeter(), 4)
}