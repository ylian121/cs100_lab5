#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

#include <stdexcept>

TEST(ConstructorsTest, testDefault1) {
    Rectangle* testRectangle = new Rectangle();
    EXPECT_EQ(testRectangle->get_width(), 0);
}

TEST(ConstructorsTest, testParameter1) {
    Rectangle* testRectangle = new Rectangle(5, 10);
    EXPECT_EQ(testRectangle->get_width(), 5);
}

TEST(ConstructorsTest, testParameter2) {
    EXPECT_DEATH (Rectangle* testRectangle = new Rectangle(-3, 0), "Width and/or height must be greater than 0.");
}

TEST(AreaTest, testInt1) {
    Rectangle* testRectangle = new Rectangle(5, 10);
    EXPECT_EQ(testRectangle->area(), 50);
}

TEST(AreaTest, testZero1) {
    Rectangle* testRectangle = new Rectangle();
    EXPECT_EQ(testRectangle->area(), 0);
}

TEST(AreaTest, testInput3) {
    Rectangle* testRectangle = new Rectangle(2, 2);
    EXPECT_EQ(testRectangle->area(), 4);
}

TEST(PerimeterTest, testInt1) {
    Rectangle* testRectangle = new Rectangle(2, 4);
    EXPECT_EQ(testRectangle->perimeter(), 12);
}

TEST(PerimeterTest, testZero1) {
    Rectangle* testRectangle = new Rectangle();
    EXPECT_EQ(testRectangle->perimeter(), 0);
}

TEST(PerimeterTest, testInput3) {
    Rectangle* testRectangle = new Rectangle(1, 1);
    EXPECT_EQ(testRectangle->perimeter(), 4);
}