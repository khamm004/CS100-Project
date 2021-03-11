#ifndef __GAMENODE_H__
#define __GAMENODE_H__

#include <vector>
#include <string>

#include "userOption.h"

using namespace std;

class GameNode{
	public:
		GameNode(string text);
		string text_out;
		vector <UserOption> userOptions;
};

#endif  
