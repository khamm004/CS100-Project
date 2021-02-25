#ifndef __SHIELD_TEST_HPP__
#define __SHIELD_TEST_HPP__

#include "gtest/gtest.h"
#include "defense.hpp"
#include "shield.hpp"

TEST(ConstructorTest, ShieldDefaultConstructor) {
    Defense* shield = new Shield();
    EXPECT_EQ(shield->getProtectionLevel(), 10);
}

#endif //__SHIELD_TEST_HPP__ 

