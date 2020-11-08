#ifndef __TEST_CPP__
#define __TEST_CPP__

#include "gtest/gtest.h"

#include "src/rectangle.cpp"

TEST(ConstructorTest, Rectangle) {
    Rectangle* test = new Rectangle(10,5);
    EXPECT_EQ(test->width(), 5);
}

TEST(ConstructorTest, Rectangle) {
    Rectangle* test = new Rectangle(5,10);
    EXPECT_EQ(test->length(), 10);
}

TEST(ConstructorTest, Rectangle) {
    Rectangle* test = new Rectangle(-10,5);
    EXPECT_EQ(test->length(), 10);
}

TEST(AreaTest, RectangleArea) {
    Rectangle* test = new Rectangle(10,10);
    EXPECT_EQ(test->area(), 100);
}

TEST(AreaTest, RectangleArea) {
    Rectangle* test = new Rectangle(-1,10);
    EXPECT_EQ(test->area(), 10);
}

TEST(AreaTest, RectangleArea) {
    Rectangle* test = new Rectangle(10,0);
    EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, RectangleArea) {
    Rectangle* test = new Rectangle(-5,-7);
    EXPECT_EQ(test->area(), 35);
}

TEST(PeriTest, RectanglePerimeter) {
    Rectangle* test = new Rectangle(15, 17);
    EXPECT_EQ(test->perimeter(), 64);
}

TEST(PeriTest, RectanglePerimeter) {
    Rectangle* test = new Rectangle(12, 7);
    EXPECT_EQ(test->perimeter(), 38);
}

TEST(PeriTest, RectanglePerimeter) {
    Rectangle* test = new Rectangle(0, 10);
    EXPECT_EQ(test->perimeter(), 20);
}

TEST(PeriTest, RectanglePerimeter) {
    Rectangle* test = new Rectangle(-5, 10);
    EXPECT_EQ(test->perimeter(), 30);
}



#endif //__TEST_CPP__
