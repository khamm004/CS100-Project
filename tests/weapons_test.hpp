#ifndef __WEAPONS_TESTS_HPP__
#define __WEAPONS_TESTS_HPP__

#include "gtest/gtest.h"

#include "../header/Weapons.hpp"
#include "../header/Wand.hpp"
#include "../header/Sword.hpp"
#include "../header/BowAndArrow.hpp"
#include "../header/Axe.hpp"

#include <stdexcept>
//Checking for type of input that could be assigned to variable damage.

TEST(WeaponsTest, weapons){
	Weapons* test = new Wand();
	test->weapon();

}



TEST(DamageTest, ZeroInputDamage){
        Weapons* test = new Wand();
        test->setDamage(0);
        EXPECT_EQ(test->getDamage(), 0);
	delete test;
}

TEST(DamageTest, ValidInputDamage){
        Weapons* test = new Wand();
        test->setDamage(40);
        EXPECT_EQ(test->getDamage(), 40);
	delete test;
}

TEST(DamageTest, InvalidInputDamage){
	Weapons* test = new Wand();
	EXPECT_THROW({
        	try {
	    		test->setDamage(-2);
		}	
        	catch (std::invalid_argument& ia)
        	{
            		EXPECT_STREQ("-2", ia.what());
           		throw;
       		}
   	 }, std::invalid_argument);
	delete test;
}
//Checking to ensure each constructor works correctly

TEST(WandTest, ConstructorAccuracy){
        Weapons* test = new Wand();
        EXPECT_EQ(test->getDamage(), 20);
	delete test;	
}

TEST(SwordTest, ConstructorAccuracy){
        Weapons* test = new Sword();
        EXPECT_EQ(test->getDamage(), 25);
	delete test;
}

TEST(BowAndArrowTest, ConstructorAccuracy){
        Weapons* test = new BowAndArrow();
        EXPECT_EQ(test->getDamage(), 15);
	delete test;
}

TEST(AxeTest, ConstructorAccuracy){
        Weapons* test = new Axe();
        EXPECT_EQ(test->getDamage(), 10);
	delete test;
}

#endif //__WEAPONS_TESTS_HPP__
