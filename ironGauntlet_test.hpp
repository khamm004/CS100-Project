#ifndef __IRON_GAUNTLET_TEST_HPP__
#define __IRON_GAUNTLET_TEST_HPP__

#include "gtest/gtest.h"
#include "defense.hpp"
#include "ironGauntlet.hpp"

TEST(ConstructorTest, GauntletDefaultConstructor) {
    Defense* ig = new IronGauntlet();
    EXPECT_EQ(ig->getProtectionLevel(), 10);
}

#endif //__IRON_GAUNTLET_TEST_HPP__ 
