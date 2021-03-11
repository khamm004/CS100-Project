#ifndef __STRATEGY_TESTS_HPP__
#define __STRATEGY_TESTS_HPP__

#include "../header/attack.hpp"
#include "../header/stab.hpp"
#include "../header/shoot.hpp"
#include "../header/enchant.hpp"
#include "../header/swing.hpp"
#include "../header/character.hpp"
#include "../header/FairyFactory.hpp"
#include "../header/ElfFactory.hpp"
#include "../header/KnightFactory.hpp"
#include "../header/TrollFactory.hpp"
#include "../header/CharacterFactory.hpp"
#include "gtest/gtest.h"
#include <iostream>


TEST(Attack, Shoot){
        CharacterFactory* elfFact = new ElfFactory();
        Character* elf = elfFact->createCharacter();
        Attack* retVal = elf->GetAttack();//->attack(fairy);
        int temp = retVal->attack(elf);
        delete elfFact;
	//Character* character = new Character();
        //character->SetAttack(new Shoot());
        //std::cout << character->GetAttack()->attack() << std::endl;
        //delete character;
}

TEST(Attack, Enchant){
        //Character* character = new Character();
        //character->SetAttack(new Enchant());
        CharacterFactory* fairyFact = new FairyFactory();
        Character* fairy = fairyFact->createCharacter();
	Attack* retVal = fairy->GetAttack();//->attack(fairy);
        int temp = retVal->attack(fairy);
	delete fairyFact;
	//delete fairy;
}

TEST(Attack, Stab){
        CharacterFactory* knightFact = new KnightFactory();
        Character* knight = knightFact->createCharacter();
        Attack* retVal = knight->GetAttack();//->attack(fairy);
        int temp = retVal->attack(knight);
        delete knightFact;
	//Character* character = new Character();
        //character->SetAttack(new Stab());
        //std::cout << character->GetAttack()->attack() << std::endl;
        //delete character;
}

TEST(Attack, Swing){
        CharacterFactory* trollFact = new TrollFactory();
        Character* troll = trollFact->createCharacter();
        Attack* retVal = troll->GetAttack();//->attack(fairy);
        int temp = retVal->attack(troll);
        delete trollFact;

	//Character* character = new Character();
        //character->SetAttack(new Swing());
        //std::cout << character->GetAttack()->attack() << std::endl;
        //delete character;
}


#endif 

