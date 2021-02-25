#ifndef __MAGIC_RUBY_TEST_HPP__
#define __MAGIC_RUBY_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/defense.hpp"
#include "../header/magic_ruby.hpp"

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
#endif //__MAGIC_RUBY_TEST_HPP__ 
