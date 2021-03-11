#ifndef __GAMETREE_H__
#define __GAMETREE_H__

#include "../header/gameNode.h"
#include "character.hpp"

#include <vector>

using namespace std;

class GameTree {
	private:
		vector<GameNode*> gameNodes;
	public:
		GameTree();
		~GameTree();
		void beachInit();
		void desertInit();
		void forestInit();

		int performDialogue(Character* user); // conversation function	
};

#endif
