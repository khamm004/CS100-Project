#ifndef __FIGHTSEQUENCE_HPP__
#define __FIGHTSEQUENCE_HPP__

#include "character.hpp"
#include "TrollFactory.hpp"
#include "CharacterFactory.hpp"
#include "ElfFactory.hpp"
#include "FairyFactory.hpp"
#include "KnightFactory.hpp"
#include "attack.hpp"
#include <cstring>

class Attack;

int fight_sequence(Character* character){
	CharacterFactory* trollFact = new TrollFactory();
        Character* troll = trollFact->createCharacter();
	int hitEnemy = 0;
	int temp = 0;
	int health = 0;
	std::string key = "";
	while(true){
		hitEnemy += character->GetAttack()->attack(character); //# of times user hits enemy
		if(hitEnemy == 2){
                        std::cout << "The enemy has succumbed to his wounds, you are victorious\n";
			return 1; //defeated the troll
                }
		temp = troll->GetAttack()->attack(troll);
		if(temp == 1){ //enemy hit
			health = character->getHealth();
			health -= 10;
			if(health > 0){
				character->setHealth(health);
			}
			else{ //character killed by enemy
				return 0;
			}
		}
		std::cout << "\nPress any key + Enter to continue: ";
		std::cin >> key;
		std::cout << "\n";
	}

}

#endif
