#include "../header/gameTree.h"
#include "../header/gameNode.h"
#include "../header/userOption.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

GameTree::GameTree(){ }

GameTree::~GameTree(){
	for (int i = 0; i < gameNodes.size(); i++){
		delete gameNodes[i];
	}
	gameNodes.clear();
}

int GameTree::performDialogue(){
	if(gameNodes.empty()) {
		return -1;
	}
	
	GameNode *currentNode = gameNodes[0];


	while(true) {
		cout << currentNode->text_out << endl;

		for(int i = 0; i < currentNode->userOptions.size(); i++){
			cout << i + 1 << ":" << currentNode->userOptions[i].text << endl;
		}

		cout << endl;
		int input;
		cin >> input;
		input--;
		if (input < 0 || input > currentNode->userOptions.size()){
			cout << "Invalid Input" << endl;
		}else{

			if (currentNode->userOptions[input].returnCode == 4){
				cout << "Game Over!! We have outsmarted you!" << endl;
				return -1; // end game, got riddle wrong
				
			}else if (currentNode->userOptions[input].returnCode == 3){ // win game
				cout << "Youve won!! You are a true survivor!" << endl;
				return -1;
			}else if (currentNode->userOptions[input].returnCode == 2){
				cout << "subtract 15 from health" << endl;
			}else if (currentNode->userOptions[input].returnCode == 1){
				cout << "fight troll" << endl;
			}else if(currentNode->userOptions[input].returnCode == 5){
				cout << "fighting troll for the last time" << endl;
				return -1;
			}/*else if(currentNode->userOptions[input].returnCode == 6){
				cout << "answering riddle for the last time" << endl;
			}	*/
			currentNode = currentNode->userOptions[input].nextNode;
		}
		cout << endl;
	}
}

void GameTree::beachInit() {
	GameNode *node0 = new GameNode("You begin traveling down the path that leads to the Left. You encounter a tollbooth and you have to pay your fee by answering this riddle.\nThe more you take, the more you leave behind. What are they?");

	GameNode *node1 = new GameNode("Tollbooth accepts answer as payment and allows passage. Standing near a road that leads into a small, abandoned town.\n Small buildings were on either side of the road with windows smashed. You look around to see if there are any street signs to let you know where you want to go next.\n You find a sign that says Sunset Beach and turn in that direction. As you walk down the road\nYouve encountered a troll! You can either:");

	GameNode *node2 = new GameNode("Congratulations! Youve survived the fight with the troll. You continue onto the road and stumble into a small grassy field.\n You begin smelling some traces of the sea and use the smell to walk your way through the field.\n On the way towards the smell, you realize that you are still in the field and you look around to see only grass everywhere. You begin to squint and find a map that will show you where you need to go once you answer the riddle.\nWhat is so fragile that saying its name breaks it?");

	GameNode *node3 = new GameNode("You decided to take the other direction to avoid the troll, which is longer than your original route. The other route seems to be more dangerous, with a more creepy vibe\n than the original route you were on. You stop moving when you begin to hear some hard breathing.\nYou turn around and find that the troll had found and followed you!");

	GameNode *node4 = new GameNode("You find that the map changed and a new picture is being drawn. The picture included the field you are and gave you arrows to\n lead you to the direction you are headed. You keep walking and hear something behind you.\nIt is the troll that you saw in the town!");

	GameNode *node5 = new GameNode("You won a fight against the troll! You continue walking and see a sign that will lead you straight to Sunset Beach!\n However, the sign is protected by the answer to this riddle. Solve it and you may make your way to your destination.\nWhat word is pronounced the same if you take away four of its five letters?");

	GameNode *node6 = new GameNode("A man looks at a painting in a museum and says, \"Brothers and sisters I have none, but that mans father is my fathers son.\" Who is in the painting?");

	GameNode *node7 = new GameNode("You fought against the troll and won! You use the directions from the map and continue walking. After a while, you begin to see sand beneath your feet.\n You are almost at your destination!\nWhat is lighter than a feather but cant be held for a long time?");

	GameNode *node8 = new GameNode("You climb out the rabbit hole successfully without finding yourself near any poisonous snakes! But as soon as you stand, you stare in the face of the troll!\n You escaped the troll too many times!");
	
	GameNode *node9 = new GameNode("You answered the riddle successfully and entered the solution into the sign. It gives you the route straight to the Sunset Beach.\n You finally get very near your destination, but a troll blocks your path!");

	GameNode *node10 = new GameNode("You keep running and find yourself near your destination, Sunset Beach! But the troll had caught up with you! You have escaped the troll too many\n times and need to fight to finally reach the beach.");


	node0->userOptions.push_back(UserOption("money", 4, nullptr));
	node0->userOptions.push_back(UserOption("children", 4, nullptr));
	node0->userOptions.push_back(UserOption("footsteps", 0, node1));
	node0->userOptions.push_back(UserOption("none", 4, nullptr));
	gameNodes.push_back(node0);

	node1->userOptions.push_back(UserOption("Combat with the troll", 1, node2));
	node1->userOptions.push_back(UserOption("Take the other direction that is longer path to your destination, but be warned, it will take a toll on your health by  5 points", 2, node3));
	gameNodes.push_back(node1);

	node2->userOptions.push_back(UserOption("glass", 4, nullptr));
	node2->userOptions.push_back(UserOption("silence", 0, node4));
	node2->userOptions.push_back(UserOption("diamonds", 4, nullptr));
	node2->userOptions.push_back(UserOption("nails", 4, nullptr));
	gameNodes.push_back(node2);

	node3->userOptions.push_back(UserOption("Combat with the troll", 1, node5));
	node3->userOptions.push_back(UserOption("Run away from the troll to escape, but be warned the troll is very fast and hurt you and make you will lose 10 points of health", 2, node6));
	gameNodes.push_back(node3);

	node4->userOptions.push_back(UserOption("Combat with the troll", 1, node7));
	node4->userOptions.push_back(UserOption("You can also choose to hide from the troll by going down a rabbit hole, but be warned that there is a chance that you will meet a poisonous snake\n and you will lose 10 points of health", 2, node8));
	gameNodes.push_back(node4);

	node5->userOptions.push_back(UserOption("empty", 4, nullptr));
	node5->userOptions.push_back(UserOption("queue", 0, node9));
	node5->userOptions.push_back(UserOption("letters", 4, nullptr));
	node5->userOptions.push_back(UserOption("ready", 4, nullptr));
	gameNodes.push_back(node5);

	node6->userOptions.push_back(UserOption("The mans grandfather", 4, nullptr));
	node6->userOptions.push_back(UserOption("The mans uncle", 4, nullptr));
	node6->userOptions.push_back(UserOption("The mans son", 0, node10));
	node6->userOptions.push_back(UserOption("The mans father", 4, nullptr));
	gameNodes.push_back(node6);

	node7->userOptions.push_back(UserOption("An ember", 4, nullptr));
	node7->userOptions.push_back(UserOption("Radioactive material", 4, nullptr));
	node7->userOptions.push_back(UserOption("Your breath", 3, nullptr));
	node7->userOptions.push_back(UserOption("gas", 4, nullptr));
	gameNodes.push_back(node7);

	node8->userOptions.push_back(UserOption("It is time to fight!", 5, nullptr));
	gameNodes.push_back(node8);

	node9->userOptions.push_back(UserOption("Defeat the troll and finally end your journey!", 5, nullptr));
	gameNodes.push_back(node9);

	node10->userOptions.push_back(UserOption("Be strong and win the combat!", 5, nullptr));
	gameNodes.push_back(node10);
}

/*
void GameTree::desertInit() {
	GameNode *node0 = new GameNode("");
	GameNode *node1 = new GameNode();
	GameNode *node2 = new GameNode();
	GameNode *node3 = new GameNode();
	GameNode *node4 = new GameNode();
	GameNode *node5 = new GameNode;
	GameNode *node6 = new GameNode;
	GameNode *node7 = new GameNode;
	GameNode *node8 = new GameNode;
	GameNode *node9 = new GameNode;
	GameNode *node10 = new GameNode;
	GameNode *node11 = new GameNode;

	node0->UserOptions.push_back(UserOption("", ));
}

void GameTree::forestInit() {
	GameNode *node0 = new GameNode();
	GameNode *node1 = new GameNode();
	GameNode *node2 = new GameNode();
	GameNode *node3 = new GameNode();
	GameNode *node4 = new GameNode();
	GameNode *node5 = new GameNode;
	GameNode *node6 = new GameNode;
	GameNode *node7 = new GameNode;
	GameNode *node8 = new GameNode;
	GameNode *node9 = new GameNode;
	GameNode *node10 = new GameNode;
	GameNode *node11 = new GameNode;

	node0->UserOptions.push_back(UserOption("", ));
}*/
