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
	gameTree.beachInit();

	int rv = gameTree.performDialogue(); 
}

