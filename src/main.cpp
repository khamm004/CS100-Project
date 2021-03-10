#include <isotream>
#include "../header/menu.hpp"
#include "../character.hpp"
#include "../header/fairy.hpp"
#include "../header/elf.hpp"
#include "../header/knight.hpp"

void start(){
	Character * userChar = nullptr;
	displayCharacter();
	int choice = getChoice();
	userChar = selectCharacter(choice);
	if (userChar != nullptr){
		//main convo
		string name;
		cout << "What is your name?" << endl;
		cin >> name;
	        cout << "Good luck on your travels " << name << endl;
		MainMenu();
		delete userChar;
	}	
}
