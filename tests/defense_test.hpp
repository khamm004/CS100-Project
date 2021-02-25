#ifndef __DEFENSE_TESTS_HPP__
#define __DEFENSE_TESTS_HPP__

#include "gtest/gtest.h"
#include "../header/defense.hpp"
#include <stdexcept>

#include "shield.hpp"
#include "dust.hpp"
#include "iron_gauntlet.hpp"
#include "magic_ruby.hpp"

// -----------------------  Shield Tests -------------//
TEST(ShieldTests, ShieldDefaultConstructor) {
    Defense* shield = new Shield();
    EXPECT_EQ(shield->getProtectionLevel(), 10);
}

// set ProtectionLevel
TEST(ShieldTests, PosShieldPL) {
    Defense* shield = new Shield();
    shield->setProtectionLevel(21);
    EXPECT_EQ(shield->getProtectionLevel(), 21);
}

TEST(ShieldTests, ZeroShieldPL) {
    Defense* shield = new Shield();
    shield->setProtectionLevel(0);
    EXPECT_EQ(shield->getProtectionLevel(), 0);
}

TEST(ShieldTests, NegShieldPL) {
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

// -----------------------  Dust Tests -------------//
TEST(DustTests, DustDefaultConstructor) {
    Defense* dust = new Dust();
    EXPECT_EQ(dust->getProtectionLevel(), 15);
}

// set ProtectionLevel
TEST(DustTests, PosDustPL) {
    Defense* dust = new Dust();
    dust->setProtectionLevel(22);
    EXPECT_EQ(dust->getProtectionLevel(), 22);
}

TEST(DustTests, ZeroDustPL) {
    Defense* dust = new Dust();
    dust->setProtectionLevel(0);
    EXPECT_EQ(dust->getProtectionLevel(), 0);
}

TEST(DustTests, NegDustPL) {
    EXPECT_THROW({
        try {
            Defense* dust = new Dust();
	    dust->setProtectionLevel(-6);
        }
        catch (std::invalid_argument& ia)
        {
            EXPECT_STREQ("-6", ia.what());
            throw;
        }
    }, std::invalid_argument);
}

// -----------------------  MagicRuby Tests -------------//
TEST(MagicRubyTests, MagicRubyDefaultConstructor) {
    Defense* ruby = new MagicRuby();
    EXPECT_EQ(ruby->getProtectionLevel(), 15);
}

// set ProtectionLevel
TEST(MagicRubyTests, PosMagicRubyPL) {
    Defense* ruby = new MagicRuby();
    ruby->setProtectionLevel(25);
    EXPECT_EQ(ruby->getProtectionLevel(), 25);
}

TEST(MagicRubyTests, ZeroMagicRubyPL) {
    Defense* ruby = new MagicRuby();
    ruby->setProtectionLevel(0);
    EXPECT_EQ(ruby->getProtectionLevel(), 0);
}

TEST(MagicRubyTests, NegMagicRubyPL) {
    EXPECT_THROW({
        try {
            Defense* ruby = new MagicRuby();
	    ruby->setProtectionLevel(-3);
        }
        catch (std::invalid_argument& ia)
        {
            EXPECT_STREQ("-3", ia.what());
            throw;
        }
    }, std::invalid_argument);
}

#endif //__DEFENSE_TESTS_HPP__
