#include "../header/gameTree.h"
#include "../header/gameNode.h"
#include "../header/userOption.h"
#include "gameTree.cpp"
#include "gameNode.cpp"
#include "userOption.cpp"

void playGame();

int main(){
	playGame();
	return 0;
}

void playGame(){
	int location = 0;

	GameTree gameTree;
	//gameTree = new GameTree();
	//gameTree.beachInit();
	//gameTree.desertInit();
	/*
 *	cout << "Where are you headed?" << endl;
 *	cout << "1: Sunset Beach" << endl;
 *	cout << "2: Desert Oasis" << endl;
 *	cout << "3: Mystical Forest" << endl;
 *	cin >> location;
 *	
 *	if(location == 1){
 *		gameTree.beachInit();
 *	} else if(location == 2){
 *		gameTree.desertInit();
 *	} else {
 *		gameTree.forestInit();
 *	}
 *
 * 	*/
	gameTree.forestInit();
	int rv = gameTree.performDialogue(); 
}

