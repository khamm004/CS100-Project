#ifndef __CHARACTER_TESTS_HPP__
#define __CHARACTER_TESTS_HPP__

#include "gtest/gtest.h"
#include "../header/character.hpp"
#include "../header/attack.hpp"
#include "../header/knight.hpp"
#include "../header/fairy.hpp"
#include "../header/elf.hpp"
#include "../header/troll.hpp"
#include <stdexcept>

// ---------------- Kinght tests --------------//
TEST(KnightTests, KnightDefaultConstructor) {
    Character* knight = new Knight();
    EXPECT_EQ(knight->getHealth(), 100);
    delete knight;
}

// set ProtectionLevel
TEST(KnightTests, PosKnightHealth) {
    Character* knight = new Knight();
    knight->setHealth(50);
    EXPECT_EQ(knight->getHealth(), 50);
    delete knight;
}

TEST(KnightTests, ZeroKnightHealth) {
    Character* knight = new Knight();
    knight->setHealth(0);
    EXPECT_EQ(knight->getHealth(), 0);
    delete knight;
}

TEST(KnightTests, NegKnightHealth) {
    Character* knight = new Knight();

    EXPECT_THROW({
        try {
	    knight->setHealth(-5);
        }
        catch (std::invalid_argument& ia)
        {
            EXPECT_STREQ("-5", ia.what());
            throw;
        }
    }, std::invalid_argument);
    delete knight;
}

// ---------------- Fairy tests --------------//
TEST(FairyTests, FairyDefaultConstructor) {
    Character* fairy = new Fairy();
    EXPECT_EQ(fairy->getHealth(), 100);
    delete fairy;
}

// set ProtectionLevel
TEST(FairyTests, PosFairyHealth) {
    Character* fairy = new Fairy();
    fairy->setHealth(150);
    EXPECT_EQ(fairy->getHealth(), 150);
    delete fairy;
}

TEST(FairyTests, ZeroFairyHealth) {
    Character* fairy = new Fairy();
    fairy->setHealth(0);
    EXPECT_EQ(fairy->getHealth(), 0);
    delete fairy;
}

TEST(FairyTests, NegFairyHealth) {
    Character* fairy = new Fairy();

    EXPECT_THROW({
        try {
	    fairy->setHealth(-10);
        }
        catch (std::invalid_argument& ia)
        {
            EXPECT_STREQ("-10", ia.what());
            throw;
        }
    }, std::invalid_argument);
    delete fairy;
}

// ---------------- Elf tests --------------//
TEST(ElfTests, ElfDefaultConstructor) {
    Character* elf = new Elf();
    EXPECT_EQ(elf->getHealth(), 100);
    delete elf;
}

// set ProtectionLevel
TEST(ElfTests, PosElfHealth) {
    Character* elf = new Elf();
    elf->setHealth(150);
    EXPECT_EQ(elf->getHealth(), 150);
    delete elf;
}

TEST(ElfTests, ZeroElfHealth) {
    Character* elf = new Elf();
    elf->setHealth(0);
    EXPECT_EQ(elf->getHealth(), 0);
    delete elf;
}

TEST(ElfTests, NegElfHealth) {
    Character* elf = new Elf();

    EXPECT_THROW({
        try {
	    elf->setHealth(-15);
        }
        catch (std::invalid_argument& ia)
        {
            EXPECT_STREQ("-15", ia.what());
            throw;
        }
    }, std::invalid_argument);
    delete elf;
}

// ---------------- Troll tests --------------//
TEST(TrollTests, TrollDefaultConstructor) {
    Character* troll = new Troll();
    EXPECT_EQ(troll->getHealth(), 100);
    delete troll;
}

// set ProtectionLevel
TEST(TrollTests, PosTrollHealth) {
    Character* troll = new Troll();
    troll->setHealth(200);
    EXPECT_EQ(troll->getHealth(), 200);
    delete troll;
}

TEST(TrollTests, ZeroTrollHealth) {
    Character* troll = new Troll();
    troll->setHealth(0);
    EXPECT_EQ(troll->getHealth(), 0);
    delete troll;
}


TEST(TrollTests, NegTrollHealth) {
    Character* troll = new Troll();

    EXPECT_THROW({
        try {
	    troll->setHealth(-20);
        }
        catch (std::invalid_argument& ia)
        {
            EXPECT_STREQ("-20", ia.what());
            throw;
        }
    }, std::invalid_argument);
    delete troll;
}

#endif //__CHARACTER_TESTS_HPP__
