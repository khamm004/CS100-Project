#ifndef __IRON_GAUNTLET_TEST_HPP__
#define __IRON_GAUNTLET_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/defense.hpp"
#include "../header/iron_gauntlet.hpp"

TEST(IronGauntletTests, IronGauntletDefaultConstructor) {
    Defense* ig = new IronGauntlet();
    EXPECT_EQ(ig->getProtectionLevel(), 10);
    delete ig;
}

// set ProtectionLevel
TEST(IronGauntletTests, PosIronGauntletPL) {
    Defense* ig = new IronGauntlet();
    ig->setProtectionLevel(23);
    EXPECT_EQ(ig->getProtectionLevel(), 23);
    delete ig;
}

TEST(IronGauntletTests, ZeroIronGauntletPL) {
    Defense* ig= new IronGauntlet();
    ig->setProtectionLevel(0);
    EXPECT_EQ(ig->getProtectionLevel(), 0);
    delete ig;
}

TEST(IronGauntletTests, NegIronGauntletPL) {
    EXPECT_THROW({
	Defense* ig = new IronGauntlet();
        try {
	    ig->setProtectionLevel(-4);
        }
        catch (std::invalid_argument& ia)
        {
	    delete ig;
            EXPECT_STREQ("-4", ia.what());
            throw;
        }
    }, std::invalid_argument);
}
#endif //__IRON_GAUNTLET_TEST_HPP__ 
