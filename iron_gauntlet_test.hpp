#ifndef __IRON_GAUNTLET_TEST_HPP__
#define __IRON_GAUNTLET_TEST_HPP__

#include "gtest/gtest.h"
#include "defense.hpp"
#include "ironGauntlet.hpp"

TEST(IronGauntletTests, IronGauntletDefaultConstructor) {
    Defense* ig = new IronGauntlet();
    EXPECT_EQ(ig->getProtectionLevel(), 10);
}

// set ProtectionLevel
TEST(IronGauntletTests, PosIronGauntletPL) {
    Defense* ig = new IronGauntlet();
    ig->setProtectionLevel(23);
    EXPECT_EQ(ig->getProtectionLevel(), 23);
}

TEST(IronGauntletTests, ZeroIronGauntletPL) {
    Defense* ig= new IronGauntlet();
    ig->setProtectionLevel(0);
    EXPECT_EQ(ig->getProtectionLevel(), 0);
}

TEST(IronGauntletTests, NegIronGauntletPL) {
    EXPECT_THROW({
        try {
            Defense* ig = new IronGauntlet();
	    ig->setProtectionLevel(-4);
        }
        catch (std::invalid_argument& ia)
        {
            EXPECT_STREQ("-4", ia.what());
            throw;
        }
    }, std::invalid_argument);
}
#endif //__IRON_GAUNTLET_TEST_HPP__ 
