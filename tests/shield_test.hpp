#ifndef __SHIELD_TEST_HPP__
#define __SHIELD_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/defense.hpp"
#include "../header/shield.hpp"
#include <stdexcept>

TEST(ShieldTests, ShieldDefaultConstructor) {
    Defense* shield = new Shield();
    EXPECT_EQ(shield->getProtectionLevel(), 10);
    delete shield;
}

// set ProtectionLevel
TEST(ShieldTests, PosShieldPL) {
    Defense* shield = new Shield();
    shield->setProtectionLevel(21);
    EXPECT_EQ(shield->getProtectionLevel(), 21);
    delete shield;
}

TEST(ShieldTests, ZeroShieldPL) {
    Defense* shield = new Shield();
    shield->setProtectionLevel(0);
    EXPECT_EQ(shield->getProtectionLevel(), 0);
    delete shield;
}

TEST(ShieldTests, NegShieldPL) {
    EXPECT_THROW({
	Defense* shield = new Shield();
        try {
	    shield->setProtectionLevel(-5);
        }
        catch (std::invalid_argument& ia)
        {
	    delete shield;
            EXPECT_STREQ("-5", ia.what());
            throw;
        }
    }, std::invalid_argument);
}
#endif //__SHIELD_TEST_HPP__ 

