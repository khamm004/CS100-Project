#include "../header/userOption.h"
#include "../header/gameNode.h"

#include <string>
using namespace std;

UserOption::UserOption(string Text, int ReturnCode, GameNode *NextNode) {
	text = Text;
	returnCode = ReturnCode;
	nextNode = NextNode;
}

