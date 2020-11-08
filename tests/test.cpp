#ifndef __TEST_CPP__
#define __TEST_CPP__

#include "gtest/gtest.h"

#include "../src/rectangle.cpp"

TEST(ConstructorTest, RectangleLenGEWid) {
    Rectangle* test = new Rectangle(10,5);
    EXPECT_EQ(test->width(), 5);
}

TEST(ConstructorTest, RectangleWidGELen) {
    Rectangle* test = new Rectangle(5,10);
    EXPECT_EQ(test->length(), 10);
}

TEST(ConstructorTest, RectangleNegLen) {
    Rectangle* test = new Rectangle(-10,5);
    EXPECT_EQ(test->length(), 10);
}

TEST(ConstructorTest, RectangleNegWid) {
    Rectangle* test = new Rectangle(10,-5);
    EXPECT_EQ(test->length(), 10);
}

TEST(AreaTest, RectangleArea) {
    Rectangle* test = new Rectangle(10,10);
    EXPECT_EQ(test->area(), 100);
}

TEST(AreaTest, RectangleAreaNegLen) {
    Rectangle* test = new Rectangle(-1,10);
    EXPECT_EQ(test->area(), 10);
}

TEST(AreaTest, RectangleAreaZeroWid) {
    Rectangle* test = new Rectangle(10,0);
    EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, RectangleAreaNegLW) {
    Rectangle* test = new Rectangle(-5,-7);
    EXPECT_EQ(test->area(), 35);
}

TEST(PeriTest, RectanglePerimeter) {
    Rectangle* test = new Rectangle(15, 17);
    EXPECT_EQ(test->perimeter(), 64);
}

TEST(PeriTest, RectanglePerimeter2) {
    Rectangle* test = new Rectangle(12, 7);
    EXPECT_EQ(test->perimeter(), 38);
}

TEST(PeriTest, RectanglePerimeterZeroLen) {
    Rectangle* test = new Rectangle(0, 10);
    EXPECT_EQ(test->perimeter(), 10);
}

TEST(PeriTest, RectanglePerimeterNegLen) {
    Rectangle* test = new Rectangle(-5, 10);
    EXPECT_EQ(test->perimeter(), 30);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


#endif //__TEST_CPP__
