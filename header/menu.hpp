#ifndef __MENU_HPP__
#define __MENU_HPP__

#include <iostream>
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
using namespace std;
#include "character.hpp"
#include "knight.hpp"
#include "elf.hpp"
#include "fairy.hpp"

void menu() {
	cout << "Welcome to Savior." << endl;
	cout << "These are the following commands used in various situations" << endl;
	cout << "\t Display the menu of commands (type menu)" << endl;
	cout << "\t Display the game instructions (type instructions)" << endl;
	cout << "\t Begin your journey! (type start)" << endl;
	cout << "\t Quit the game. (type quit)" << endl;
}

void instructions(){
	cout << "Instructions on how to play Savior." << endl;
	cout << "\tWhen you enter the game, you will be asked to select a character." << endl;
	cout << "\tYou can choose to be a Fairy, a Knight, or an Elf." << endl;
	cout << "\t\t 1. Fairy is a character that uses a Wand as a weapon and Dust as a defense." << endl;
	cout << "\t\t 2. Knight is a character that uses a Sword as a weapon and Shield as a defense." << endl;
	cout << "\t\t 3. Elf is a character that uses a Bow and Arrow as a weapon and Magic Ruby as a defense." << endl;
	cout << "\t After you choose your character, you will be asked a series of questions that could lead you to different scenarios. For example, you will be asked a riddle in which you are given multiple choices. Your role is to choose the correct option given to continue playing the game. You are given two attempts in giving the correct answer or else you will lose the game. Once you complete all the riddles, you have won the game." << endl;

	cout << "Please enter if you would like to:" << endl;
	cout << "Go back to the menu (type menu) or start the game (type start):" << endl;
}

void MainMenu() {
	string choice;
	bool quit = false;
	menu();
	cin >> choice;
	while(quit == false){
		if(choice == "menu" || choice == "Menu"){
			menu();
		}else if(choice == "instructions" || choice == "Instructions"){
			instructions();
		}else if(choice == "start" || choice == "Start"){	
			//gameplay class or main
	        cout << "gameplay" << endl;
			break;
		} else if(choice == "quit" || choice == "Quit"){
			quit = true;
            		break;
		} else {
			cout << "Couldn’t understand. Please choose one of the options:" << endl;
        	}
        cin >> choice;
	}
}

void displayCharacters(){
        cout << "Choose a character" << endl;
        cout << "1 : Fairy" <<endl;
        cout << "2: Elf" << endl;
        cout << "3: Knight" << endl;
}

int getChoice(){
        int choice;
        cin >> choice;
        while (choice < 0 || choice > 3){
                cin >> choice;
        }
        return choice;
}

Character * selectCharacter(int choice){
        if (choice == 1){
		CharacterFactory* fairyTFact = new FairyFactory();
		Character* fairy = fairyFact->createCharacter();
                return fairy;
        }else if (choice == 2){
                CharacterFactory* elfTFact = new ElfFactory();
		Character* elf = elfFact->createCharacter();
                return elf;
        }else if (choice == 3){
                CharacterFactory* knightTFact = new KnightFactory();
		Character* knight = knightFact->createCharacter();
                return knight;
        }else{
                return nullptr;
        }
}
#endif //__MENU_HPP__
