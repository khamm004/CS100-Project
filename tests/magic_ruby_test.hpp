#ifndef __MAGIC_RUBY_TEST_HPP__
#define __MAGIC_RUBY_TEST_HPP__

#include "gtest/gtest.h"
#include "../header/defense.hpp"
#include "../header/magic_ruby.hpp"

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
#endif //__MAGIC_RUBY_TEST_HPP__ 
