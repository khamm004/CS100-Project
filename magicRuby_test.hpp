#ifndef __MAGIC_RUBY_TEST_HPP__
#define __MAGIC_RUBY_TEST_HPP__

#include "gtest/gtest.h"
#include "defense.hpp"
#include "magicRuby.hpp"

TEST(ConstructorTest, RubyDefaultConstructor) {
    Defense* ruby = new MagicRuby();
    EXPECT_EQ(ruby->getProtectionLevel(), 15);
}

#endif //__MAGIC_RUBY_TEST_HPP__ 
