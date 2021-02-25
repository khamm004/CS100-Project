#ifndef __DUST_TEST_HPP__
#define __DUST_TEST_HPP__

#include "gtest/gtest.h"
#include "defense.hpp"
#include "dust.hpp"

TEST(ConstructorTest, DustDefaultConstructor) {
    Defense* dust = new Dust();
    EXPECT_EQ(dust->getProtectionLevel(), 15);
}

#endif //__DUST_TEST_HPP__ 
