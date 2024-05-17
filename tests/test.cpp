#include "c-echo.h"
#include "c-count.h"

#include "gtest/gtest.h"

TEST(ConstructorsTest, testInput1) {
    char* test_val[3]; test_val[0] = "./c-echo-count"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(ConstructorsTest, testInput2) {
    char* test_val[1]; test_val[0] = "./c-echo-count";
    EXPECT_EQ("", echo(1, test_val));
}

TEST(ConstructorsTest, testInput3) {
    char* test_val[1]; test_val[0] = "./c-echo-count";
    EXPECT_EQ("", echo(1, test_val));
}

TEST(AreaTest, testInput1) {
    std::string test_str = "hello world";
    EXPECT_EQ(2, count(test_str));
}

TEST(AreaTest, testInput2) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(AreaTest, testInput3) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(PerimeterTest, testInput1) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(PerimeterTest, testInput2) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(PerimeterTest, testInput3) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}