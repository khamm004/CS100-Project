#ifndef __FACTORIES_TESTS_HPP__
#define __FACTORIES_TESTS_HPP__

#include "gtest/gtest.h"

#include "../header/Weapons.hpp"
#include "../header/Wand.hpp"
#include "../header/Sword.hpp"
#include "../header/BowAndArrow.hpp"
#include "../header/Axe.hpp"

#include "../header/defense.hpp"
#include "../header/shield.hpp"
#include "../header/dust.hpp"
#include "../header/iron_gauntlet.hpp"
#include "../header/magic_ruby.hpp"

#include "../header/CharacterFactory.hpp"
#include "../header/FairyFactory.hpp"
#include "../header/KnightFactory.hpp"
#include "../header/TrollFactory.hpp"
#include "../header/ElfFactory.hpp"

#include "../header/character.hpp"
#include "../header/knight.hpp"
#include "../header/fairy.hpp"
#include "../header/elf.hpp"
#include "../header/troll.hpp"

TEST(FairyTest, CorrectWeapon){
	CharacterFactory* fairyTest = new FairyFactory();
	Character* test = fairyTest->createCharacter();
	EXPECT_EQ(test->getWeapon()->getDamage(), 20);
	delete fairyTest;
	delete test;

}

TEST(FairyTest, CorrectDefense){
        CharacterFactory* fairyTest = new FairyFactory();
        Character* test = fairyTest->createCharacter();
        EXPECT_EQ(test->getDefense()->getProtectionLevel(), 15);
        delete fairyTest;
        delete test;
}

TEST(KnightTest, CorrectWeapon){
        CharacterFactory* knightTest = new KnightFactory();
        Character* test = knightTest->createCharacter();
        EXPECT_EQ(test->getWeapon()->getDamage(), 25);
        delete knightTest;
        delete test;
}

TEST(KnightTest, CorrectDefense){
        CharacterFactory* knightTest = new KnightFactory();
        Character* test = knightTest->createCharacter();
        EXPECT_EQ(test->getDefense()->getProtectionLevel(), 10);
        delete knightTest;
        delete test;
}

TEST(ElfTest, CorrectWeapon){
        CharacterFactory* elfTest = new ElfFactory();
        Character* test = elfTest->createCharacter();
        EXPECT_EQ(test->getWeapon()->getDamage(), 15);
        delete elfTest;
        delete test; 
}

TEST(ElfTest, CorrectDefense){
        CharacterFactory* elfTest = new ElfFactory();
        Character* test = elfTest->createCharacter();
        EXPECT_EQ(test->getDefense()->getProtectionLevel(), 15);
        delete elfTest;
        delete test;
}

TEST(TrollTest, CorrectWeapon){
        CharacterFactory* trollTest = new TrollFactory();
        Character* test = trollTest->createCharacter();
        EXPECT_EQ(test->getWeapon()->getDamage(), 10);
        delete trollTest;
        delete test;
}

TEST(TrollTest, CorrectDefense){
	CharacterFactory* trollTest = new TrollFactory();
        Character* test = trollTest->createCharacter();
        EXPECT_EQ(test->getDefense()->getProtectionLevel(), 10);
        delete trollTest;
        delete test;        
}

#endif
