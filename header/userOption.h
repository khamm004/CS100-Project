#ifndef __USEROPTION_H__
#define __USEROPTION_H__

#include <string>
#include <vector>
#include "gameNode.h"

using namespace std;

class GameNode;

class UserOption {
	public:
		UserOption(string Text, int ReturnCode, GameNode *NextNode);
		string text;
		int returnCode;
		GameNode* nextNode; 
	
};

#endif
