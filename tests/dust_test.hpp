#ifndef __DUST_TEST_HPP__
#define __DUST_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/defense.hpp"
#include "../header/dust.hpp"

TEST(DustTests, DustDefaultConstructor) {
    Defense* dust = new Dust();
    EXPECT_EQ(dust->getProtectionLevel(), 15);
    delete dust;
}

// set ProtectionLevel
TEST(DustTests, PosDustPL) {
    Defense* dust = new Dust();
    dust->setProtectionLevel(22);
    EXPECT_EQ(dust->getProtectionLevel(), 22);
    delete dust;
}

TEST(DustTests, ZeroDustPL) {
    Defense* dust = new Dust();
    dust->setProtectionLevel(0);
    EXPECT_EQ(dust->getProtectionLevel(), 0);
    delete dust;
}

TEST(DustTests, NegDustPL) {
    EXPECT_THROW({
	Defense* dust = new Dust();
        try {
	    dust->setProtectionLevel(-6);
	}
        catch (std::invalid_argument& ia)
        {
            delete dust;
	    EXPECT_STREQ("-6", ia.what());
            throw;
        }
    }, std::invalid_argument);   
}
#endif //__DUST_TEST_HPP__ 
