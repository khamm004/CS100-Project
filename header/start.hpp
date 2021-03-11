#ifndef __START_HPP__
#define __START_HPP__

#include <iostream>
#include "Weapons.hpp"
#include "defense.hpp"

#include "CharacterFactory.hpp"
#include "FairyFactory.hpp"
#include "KnightFactory.hpp"
#include "TrollFactory.hpp"
#include "ElfFactory.hpp"

#include "character.hpp"
#include "knight.hpp"
#include "fairy.hpp"
#include "elf.hpp"
#include "troll.hpp"

#include "gameTree.h"
#include "gameNode.h"
#include "userOption.h"
#include "../src/gameTree.cpp"
#include "../src/gameNode.cpp"
#include "../src/userOption.cpp"

using namespace std;

class Character;
//class GameTree;

void displayCharacters(){
        cout << "Choose a character" << endl;
        cout << "1 :Fairy" <<endl;
        cout << "2: Elf" << endl;
        cout << "3: Knight" << endl;
}

int getChoice(){
        int choice;
        cin >> choice;
        while (choice < 1 || choice > 3){
		cout << "Select characters 1-3" << endl;
                cin >> choice;
        }
        return choice;
}

Character * selectCharacter(int choice){
        if (choice == 1){
		CharacterFactory* fairyFact = new FairyFactory();
		Character* fairy = fairyFact->createCharacter();
		cout << "You chose fairy!" << endl;
		delete fairyFact;
		return fairy;
        }else if (choice == 2){
                CharacterFactory* elfFact = new ElfFactory();
		Character* elf = elfFact->createCharacter();
		cout << "You chose elf!" << endl;
		delete elfFact;
		return elf;
        }else if (choice == 3){
                CharacterFactory* knightFact = new KnightFactory();
		Character* knight = knightFact->createCharacter();
		cout << "You chose knight!" << endl;
                delete knightFact;
		return knight;
        }else{
		cout << "No character chosen." << endl;
                return nullptr;
        }

}

void start(){
 	  Character * userChar = nullptr;
	  displayCharacters();
	  int choice = getChoice();
	  userChar = selectCharacter(choice);
	  if (userChar != nullptr){
             cout << "created character" << choice << " successsfully" << endl;
   	  }
		
	int location = 0;

	GameTree gameTree;
	
 	cout << "Where are you headed?" << endl;
 	cout << "1: Sunset Beach" << endl;
 	cout << "2: Desert Oasis" << endl;
 	cout << "3: Mystical Forest" << endl;
	cin >> location;

	if(location == 1){
		gameTree.beachInit();
 	} else if(location == 2){
 		gameTree.desertInit();
 	} else {
 		gameTree.forestInit();
 	} 	

	int rv = gameTree.performDialogue(userChar); 
	delete userChar;
}		 	 	 	 					 	 		 	 		 	  			
#endif //__START_HPP__
