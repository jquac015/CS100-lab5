#ifndef __TEST_CPP__
#define __TEST_CPP__

#include "gtest/gtest.h"

#include "src/rectangle.cpp"

TEST(Example, RectangleArea) {
    Rectangle* test = new Rectangle(10,10);
    EXPECT_EQ(test->area(), 100);
}

TEST(Example, RectanglePerimeter) {
    Rectangle* test = new Rectangle(15, 17);
    EXPECT_EQ(test->perimeter(), 64);
}

#endif //__RAND_TEST_HPP__
