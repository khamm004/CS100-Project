#ifndef __SWING_HPP__
#define __SWING_HPP__
#include "attack.hpp"
#include <iostream>
#include <cstring>

class Swing: public Attack
{
public:
    virtual int attack(Character* character) const{
        srand(time(NULL));
        if(rand()%2){
            	std::cout << "The enemy has successfully swung his ";
		character->getWeapon()->weapon();
		std::cout << " and hit you. You have lost 10 health points.\n";
		return 1;
        }
        else{
		std::cout << "The enemy swung at you but missed,";
		std::cout << " you remain strong \n";
                return 0;
        }
    }
};

#endif //__SWING_HPP__

