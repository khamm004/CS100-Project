#ifndef __STAB_HPP__
#define __STAB_HPP__
#include "attack.hpp"
#include <iostream>
#include <string>

class Stab: public Attack
{
public:
    virtual int attack(Character* character) const{
        srand(time(NULL));
        if(rand()%2){
            	std::cout << "You have successfully stabbed the enemy with your ";
		character->getWeapon()->weapon();
		std::cout << ", the enemy is significantly wounded. \n";
        	return 1;
	}
        else{
            	std::cout << "Your attempt to stab the enemy with your ";
		character->getWeapon()->weapon();	
		std::cout << " was not successful, the enemy remains strong. \n";
        	return 0;
	}
    }
};

#endif //__STAB_HPP__

