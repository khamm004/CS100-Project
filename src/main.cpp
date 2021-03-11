#include <iostream>
#include "../header/menu.hpp"
//#include "../header/character.hpp"
////#include "../header/fairy.hpp"
////#include "../header/elf.hpp"
////#include "../header/knight.hpp"

#include "../header/gameTree.h"
#include "../header/gameNode.h"
#include "../header/userOption.h"
#include "gameTree.cpp"
#include "gameNode.cpp"
#include "userOption.cpp"

void playGame();

int main(){
	MainMenu();
	playGame();
	return 0;
}

void playGame(){
	int location = 0;

	GameTree gameTree;
	//gameTree = new GameTree();
	//gameTree.beachInit();
	//gameTree.desertInit();

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

  	
	//gameTree.forestInit();
	int rv = gameTree.performDialogue(user); 
}

