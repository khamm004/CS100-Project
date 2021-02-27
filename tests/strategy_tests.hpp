#ifndef __STRATEGY_TESTS_HPP__
#define __STRATEGY_TESTS_HPP__

#include "../header/attack.hpp"
#include "../header/stab.hpp"
#include "../header/shoot.hpp"
#include "../header/enchant.hpp"
#include "../header/swing.hpp"
#include "../header/character.hpp"

#include "gtest/gtest.h"
#include <iostream>

TEST(Attack, Shoot){
        Character* character = new Character();
        character->SetAttack(new Shoot());
        std::cout << character->GetAttack()->attack() << std::endl;
        delete character;
}

TEST(Attack, Enchant){
        Character* character = new Character();
        character->SetAttack(new Enchant());
        std::cout << character->GetAttack()->attack() << std::endl;
        delete character;
}

TEST(Attack, Stab){
        Character* character = new Character();
        character->SetAttack(new Stab());
        std::cout << character->GetAttack()->attack() << std::endl;
        delete character;
}

TEST(Attack, Swing){
        Character* character = new Character();
        character->SetAttack(new Swing());
        std::cout << character->GetAttack()->attack() << std::endl;
        delete character;
}


#endif 

