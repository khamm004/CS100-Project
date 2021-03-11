#include "../header/gameTree.h"
#include "../header/gameNode.h"
#include "../header/userOption.h"

#include "../header/character.hpp"

#include "../header/fightsequence.hpp"
#include "../header/attack.hpp"
#include "../header/TrollFactory.hpp"
#include "../header/CharacterFactory.hpp"
#include "../header/ElfFactory.hpp"
#include "../header/FairyFactory.hpp"
#include "../header/KnightFactory.hpp"

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

int GameTree::performDialogue(Character* user){
	srand(time(NULL));
	if(gameNodes.empty()) {
		return -1;
	}
	
	GameNode *currentNode = gameNodes[0];
	//Character* user;

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
				int subtract = rand()%15+1;
				//int health = user->getHealth();
				user->setHealth(user->getHealth() - subtract);
				cout << "subtract " << subtract << " from health" << endl;
			}else if (currentNode->userOptions[input].returnCode == 1){
				//if(TROLLFUNCTION == true) --> continue else cout << GAMEOVER return -1;
				cout << "fight troll" << endl;
				if(fight_sequence(user) == 0){
					cout << "Game Over!! We have outsmarted you!" << endl;
					return -1;
				} else {
					cout << "You won against the troll!" << endl;
				}
			}else if(currentNode->userOptions[input].returnCode == 5){
				cout << "fighting troll for the last time" << endl;
                                if(fight_sequence(user) == 0){
                                        cout << "Game Over!! We have outsmarted you!" << endl;
                                } else {
                                        cout << "You won against the troll!" << endl;
					cout << "Youve won!! You are a true survivor!" << endl;
                                }			
				return -1;
			}
			currentNode = currentNode->userOptions[input].nextNode;
		}
		cout << endl;
	}
	delete user;
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

void GameTree::desertInit() {
	GameNode *node0 = new GameNode("You continue going down the same path straight ahead.\nYou encounter a bridge blocked by talking sheep that ask a riddle for passage.\nWhat does the fox say?");

	GameNode *node1 = new GameNode("You passed by sheep and walked across the bridge. As you continue down the path you find yourself walking between rows of tall, ominous trees.\nThough it is the middle of the day, most of the suns rays are blocked by the thick foliage. You continue down the road and begin to hear whispers emanating from within the forest and a troll emerges from the forest, blocking your path. \nYou can either:");

	GameNode *node2 = new GameNode("You have successfully defeated the troll!\nIm tall when Im young, and Im short when Im old. What am I?");

	GameNode *node3 = new GameNode("You sprint into the forest leaving the lumbering troll behind. With no way of knowing where\n to go next to get back on track toward the Desert Oasis you search for a friendly creature\n in the wilderness to help you on your way. You finally come across an owl perched on a tree branch near a troll that you can ask for directions.\n But to be able to ask the owl, you must combat with troll. ");

	GameNode *node4 = new GameNode("Nice job! You are too smart to be tripped up with those simple riddles. You notice \nyou are now longer in the forest. You are across a field of volcanic rocks. Some are\noozing lava and some look like normal rocks. Uh oh! There is a troll following you\n from the forest, but you dont have enough time to look for an alternative route. \nYou can either.. ");

	GameNode *node5 = new GameNode("You were able to survive against the fight with the troll and helped out the owl! You ask the owl if it can \nhelp show you the way to the Desert Oasis. The owl agreed but only if you are able to solve the riddle. \nHow can a man go eight days without sleep?");

	GameNode *node6 = new GameNode("I have lakes with no water, mountains with no stone and cities with no buildings. What am I?");

	GameNode *node7 = new GameNode("That was a close one! As you look ahead you are able to see some vegetation.\nThat means you are nearly at the Oasis! However, you do not have enough strength to carry you over there.\nLuckily for you there is a talking camel that is willing to take you there if you are able to solve the following riddle\nWhat should you break before you use it?");

	GameNode *node8 = new GameNode("Well done, you are a true fighter indeed. No troll will be messing with you anytime soon.\n As you continue to walk in victory you notice some cactus! Your mouth begins\n to water at the idea of drinking the water inside. You are about to reach for it, but a troll\n is going to get it before you, unless you defeat it.");
	
	GameNode *node9 = new GameNode("The owl begins to fly with you to show you the way to the Desert Oasis.\n The owl stops and tells you that the Desert Oasis is in front of them. The owl flys away and as\n you watch it fly away, the troll had come back to block you from going past it.");

	GameNode *node10 = new GameNode("You were unable to successfully escape the troll. But you are super close to your destination! Your last step is to fight against the troll!");


	node0->userOptions.push_back(UserOption("Wa-pa-pa-pa-pa-pa-pow", 4, nullptr));
	node0->userOptions.push_back(UserOption("Hatee-hatee-hatee-ho", 4, nullptr));
	node0->userOptions.push_back(UserOption("Fraka-kaka-kaka-kaka-kow", 4, nullptr));
	node0->userOptions.push_back(UserOption("All of the Above", 0, node1));
	gameNodes.push_back(node0);

	node1->userOptions.push_back(UserOption("Combat with the troll", 1, node2));
	node1->userOptions.push_back(UserOption("Take a longer route through forest, but be warned it will take a toll on your health by 5 points", 2, node3));
	gameNodes.push_back(node1);

	node2->userOptions.push_back(UserOption("A tomato", 4, nullptr));
	node2->userOptions.push_back(UserOption("Yo-yo", 4, nullptr));
	node2->userOptions.push_back(UserOption("Cold", 4, nullptr));
	node2->userOptions.push_back(UserOption("A candle", 0, node4));
	gameNodes.push_back(node2);

	node3->userOptions.push_back(UserOption("Combat with the troll", 1, node5));
	node3->userOptions.push_back(UserOption("Throw a stick to distract the troll to escape, but be warned the troll can come back and hurt you and make you will lose 10 points of health", 2, node6));
	gameNodes.push_back(node3);

	node4->userOptions.push_back(UserOption("Combat with the troll", 1, node7));
	node4->userOptions.push_back(UserOption("Jump over the volcanic rocks, lose 15 points of health", 2, node8));
	gameNodes.push_back(node4);

	node5->userOptions.push_back(UserOption("By sleeping at night", 0, node9));
	node5->userOptions.push_back(UserOption("Energy drinks", 4, nullptr));
	node5->userOptions.push_back(UserOption("Meditation", 4, nullptr));
	node5->userOptions.push_back(UserOption("By not sleeping at all", 4, nullptr));
	gameNodes.push_back(node5);

	node6->userOptions.push_back(UserOption("Grass", 4, nullptr));
	node6->userOptions.push_back(UserOption("Forest", 4, nullptr));
	node6->userOptions.push_back(UserOption("Ocean", 4, nullptr));
	node6->userOptions.push_back(UserOption("map", 0, node10));
	gameNodes.push_back(node6);

	node7->userOptions.push_back(UserOption("glowsticks", 4, nullptr));
	node7->userOptions.push_back(UserOption("egg", 3, nullptr));
	node7->userOptions.push_back(UserOption("spaghetti", 4, nullptr));
	node7->userOptions.push_back(UserOption("kit-kat bar", 4, nullptr));
	gameNodes.push_back(node7);

	node8->userOptions.push_back(UserOption("It is time to fight!", 5, nullptr));
	gameNodes.push_back(node8);

	node9->userOptions.push_back(UserOption("Fight and you will finally reach your destination!", 5, nullptr));
	gameNodes.push_back(node9);

	node10->userOptions.push_back(UserOption("Become victorious!", 5, nullptr));
	gameNodes.push_back(node10);
}


void GameTree::forestInit() {
	GameNode *node0 = new GameNode("You begin traveling down the path that leads to the Right. You encounter flying monkeys and broken bridge.\nI have lakes with no water, mountains with no stone and cities with no buildings. What am I?");

	GameNode *node1 = new GameNode("Flying monkeys like your answer and agree to fly you over the river to the other side. On the other side is a land\n so green and so lush, you see mountains as high as the sky, half coated in white. As you squint, you\n can make out some caves hidden to the right of the mountains.\n You must cross these caves to reach the Mystical Forest. You make your way to the caves\nYouve encountered a troll!! You can either:");

	GameNode *node2 = new GameNode("Youve reached the peak of the mountain, but in order to continue to cross you must solve the following riddle. \nWhat tastes better than it smells?");

	GameNode *node3 = new GameNode("Youve walked past the mountains and come to a standstill when you see the massive waterfall \nthat descends just a few feet in front of you. The water flows aggressively but you need to get to the bottom because that is the way to the Mystical Forest. You hear the sound of footsteps. \nYou turn around and see a troll running behind you. It must have spotted you near the caves! You can either: ");

	GameNode *node4 = new GameNode("Youve walked past the mountains and come to a standstill when you see the massive waterfall that \ndescends just a few feet in front of you. The water flows aggressively but you need to get to the bottom because that is the way to the Mystical Forest. You hear the sound of footsteps.\n You turn around and see a troll running behind you. It must have spotted you near the caves! You can either: ");

	GameNode *node5 = new GameNode("That was close! But you managed to defeat the troll! You are getting closer to the Mystical Forest, you can smell it.\n You must now enter a golden gate. But how? You do not have the key\n and it is too high for you to jump. A sorcerer appears as says to you \"I will open the gate for\n you if you can answer the following riddle..\"\n I have no doors, but I have keys. I have no rooms, but I have a space.\n You can enter, but you can never leave. What am I?");

	GameNode *node6 = new GameNode("What is always in front of you but cant be seen?");

	GameNode *node7 = new GameNode("OMG! Do your eyes deceive you? That looks like the Mystical Forest, but it looks so far away \nand you are exhausted. You notice a witch to your right and she says to you.\n \"I can take you to the Mystical Forest on my broom if you answer the following riddle correctly\"\nWhat are the next three letters in this combination? OTTFFSS");

	GameNode *node8 = new GameNode("That was a close one! You really kicked that trolls butt! As you continue to\n walk, you begin to smell the mystic green leaves of the Mystical Forest. That means you are nearly there. However, the troll is not \nyet defeated, it is getting up and coming behind you! Quick put the troll out of its misery and you will get to go to the Mystical Forest.");
	
	GameNode *node9 = new GameNode("The golden gate is opened for you. You walk in and can see the Mystical Forest.\n However, the sorcerer did not close the gate and a troll is coming after you!");

	GameNode *node10 = new GameNode("Swoosh! The water is pushing you to shore..you open your eyes and can see\n the mystical Forest ahead of you. However, youve managed to escape the trolls too many times.\n It looks like your luck has run out because there is a troll heading your way!");


	node0->userOptions.push_back(UserOption("Grass", 4, nullptr));
	node0->userOptions.push_back(UserOption("Forest", 4, nullptr));
	node0->userOptions.push_back(UserOption("Ocean", 4, nullptr));
	node0->userOptions.push_back(UserOption("Map", 0, node1));
	gameNodes.push_back(node0);

	node1->userOptions.push_back(UserOption("Combat with the troll", 1, node2));
	node1->userOptions.push_back(UserOption("Take a longer route through the mountains, but be warned it will take a toll on your health by 5 points", 2, node3));
	gameNodes.push_back(node1);

	node2->userOptions.push_back(UserOption("jackfruit", 4, nullptr));
	node2->userOptions.push_back(UserOption("egg", 4, nullptr));
	node2->userOptions.push_back(UserOption("your tongue", 0, node4));
	node2->userOptions.push_back(UserOption("fish", 4, nullptr));
	gameNodes.push_back(node2);

	node3->userOptions.push_back(UserOption("Combat with the troll", 1, node5));
	node3->userOptions.push_back(UserOption("Jump down the waterfall and escape, but be warned the bottom is rocky and you will lose 10 points of health", 2, node6));
	gameNodes.push_back(node3);

	node4->userOptions.push_back(UserOption("Combat with the troll", 1, node7));
	node4->userOptions.push_back(UserOption("Jump down the waterfall and escape, but be warned the bottom is rocky and you will lose 10 points of health", 2, node8));
	gameNodes.push_back(node4);

	node5->userOptions.push_back(UserOption("piano", 4, nullptr));
	node5->userOptions.push_back(UserOption("keyboard", 4, nullptr));
	node5->userOptions.push_back(UserOption("dictionary", 0, node9));
	node5->userOptions.push_back(UserOption("entrance", 4, nullptr));
	gameNodes.push_back(node5);

	node6->userOptions.push_back(UserOption("forehead", 4, nullptr));
	node6->userOptions.push_back(UserOption("goals", 4, nullptr));
	node6->userOptions.push_back(UserOption("chin", 4, nullptr));
	node6->userOptions.push_back(UserOption("future", 0, node10));
	gameNodes.push_back(node6);

	node7->userOptions.push_back(UserOption("WWP", 4, nullptr));
	node7->userOptions.push_back(UserOption("OTT", 4, nullptr));
	node7->userOptions.push_back(UserOption("ENT", 3, nullptr));
	node7->userOptions.push_back(UserOption("OTF", 4, nullptr));
	gameNodes.push_back(node7);

	node8->userOptions.push_back(UserOption("It is time to fight!", 5, nullptr));
	gameNodes.push_back(node8);

	node9->userOptions.push_back(UserOption("You must defeat the troll!", 5, nullptr));
	gameNodes.push_back(node9);

	node10->userOptions.push_back(UserOption("Quick you must fight!", 5, nullptr));
	gameNodes.push_back(node10);
}

