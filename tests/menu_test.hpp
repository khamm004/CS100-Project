#ifndef __MENU_TESTS_HPP__
#define __MENU_TESTS_HPP__

#include "gtest/gtest.h"
#include "..header/menu.hpp"
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

TEST(SelectCharacter, Knight){
        Character* character = selectCharacter(1);
        EXPECT_EQ(character->getWeapon()->getDamage(), 25);
        EXPECT_EQ(character->getDefense()->getProtectionLevel(), 10);
        delete character;
}

TEST(SelectCharacter, Elf){
        Character* character = selectCharacter(1);
        EXPECT_EQ(character->getWeapon()->getDamage(), 20);
        EXPECT_EQ(character->getDefense()->getProtectionLevel(), 15);
        delete character;
}

TEST(SelectCharacter, Fairy){
        Character* character = selectCharacter(1);
        EXPECT_EQ(character->getWeapon()->getDamage(), 15);
        EXPECT_EQ(character->getDefense()->getProtectionLevel(), 15);
        delete character;
}

TEST(SelectCharacter, Incorrect){
        Character* character = selectCharacter(5);
        EXPECT_EQ(character, nullptr);
        delete character;
}
#endif //__MENU_TESTS_HPP__
