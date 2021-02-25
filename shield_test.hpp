#ifndef __SHIELD_TEST_HPP__
#define __SHIELD_TEST_HPP__

#include "gtest/gtest.h"
#include "defense.hpp"
#include "shield.hpp"
#include <stdexcept>

TEST(ConstructorTest, ShieldDefaultConstructor) {
    Defense* shield = new Shield();
    EXPECT_EQ(shield->getProtectionLevel(), 10);
}

// set ProtectionLevel
TEST(ProtectionLevelTests, PosShieldPL) {
    Defense* shield = new Shield();
    shield->setProtectionLevel(21);
    EXPECT_EQ(shield->getProtectionLevel(), 21);
}

TEST(ProtectionLevelTests, ZeroShieldPL) {
    Defense* shield = new Shield();
    shield->setProtectionLevel(0);
    EXPECT_EQ(shield->getProtectionLevel(), 0);
}

TEST(ProtectionLevelTests, NegShieldPL) {
    EXPECT_THROW({
        try {
            Defense* shield = new Shield();
	    shield->setProtectionLevel(-5);
        }
        catch (std::invalid_argument& ia)
        {
            EXPECT_STREQ("-5", ia.what());
            throw;
        }
    }, std::invalid_argument);
}
#endif //__SHIELD_TEST_HPP__ 

