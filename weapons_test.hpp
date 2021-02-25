#ifndef __WEAPONS_TESTS_HPP__
#define __WEAPONS_TESTS_HPP__

#include "Weapons.hpp"
#include "gtest/gtest.h"

#include "Wand.hpp"
#include "Sword.hpp"
#include "BowAndArrow.hpp"
#include "Axe.hpp"

TEST(WandTest, ZeroInputDamage){
        Weapons* test = new Wand();
        test->setDamage(0);
        EXPECT_EQ(test->getDamage(), 0);
}

TEST(WandTest, ValidInputDamage){
        Weapons* test = new Wand();
        test->setDamage(40);
        EXPECT_EQ(test->getDamage(), 40);
}

TEST(WandTest, ConstructorAccuracy){
        Weapons* test = new Wand();
        EXPECT_EQ(test->getDamage(), 20);
}

TEST(SwordTest, ConstructorAccuracy){
        Weapons* test = new Sword();
        EXPECT_EQ(test->getDamage(), 25);
}

TEST(BowAndArrowTest, ConstructorAccuracy){
        Weapons* test = new BowAndArrow();
        EXPECT_EQ(test->getDamage(), 15);
}

TEST(AxeTest, ConstructorAccuracy){
        Weapons* test = new Axe();
        EXPECT_EQ(test->getDamage(), 10);
}

#endif //__WEAPONS_TESTS_HPP__
