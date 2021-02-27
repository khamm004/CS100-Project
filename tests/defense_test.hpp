#ifndef __DEFENSE_TESTS_HPP__
#define __DEFENSE_TESTS_HPP__

#include "gtest/gtest.h"
#include "../header/defense.hpp"
#include "../header/shield.hpp"
#include "../header/dust.hpp"
#include "../header/iron_gauntlet.hpp"
#include "../header/magic_ruby.hpp"
#include <stdexcept>


// ---------------- Shield tests --------------//
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

// ---------------- Dust tests --------------//
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

// ---------------- IronGauntlet tests --------------//
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
// ---------------- MagicRuby tests --------------//
TEST(MagicRubyTests, MagicRubyDefaultConstructor) {
    Defense* ruby = new MagicRuby();
    EXPECT_EQ(ruby->getProtectionLevel(), 15);
    delete ruby;
}

// set ProtectionLevel
TEST(MagicRubyTests, PosMagicRubyPL) {
    Defense* ruby = new MagicRuby();
    ruby->setProtectionLevel(25);
    EXPECT_EQ(ruby->getProtectionLevel(), 25);
    delete ruby;
}

TEST(MagicRubyTests, ZeroMagicRubyPL) {
    Defense* ruby = new MagicRuby();
    ruby->setProtectionLevel(0);
    EXPECT_EQ(ruby->getProtectionLevel(), 0);
    delete ruby;
}

TEST(MagicRubyTests, NegMagicRubyPL) {
    EXPECT_THROW({
	Defense* ruby = new MagicRuby();
        try {
	    ruby->setProtectionLevel(-3);
        }
        catch (std::invalid_argument& ia)
        {
	    delete ruby;	
            EXPECT_STREQ("-3", ia.what());
            throw;
        }
    }, std::invalid_argument);
 
}

#endif //__DEFENSE_TESTS_HPP__