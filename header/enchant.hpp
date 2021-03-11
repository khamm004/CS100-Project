#ifndef __ENCHANT_HPP__
#define __ENCHANT_HPP__
#include "attack.hpp"
#include <iostream>
#include <cstring>

class Enchant: public Attack
{
public:
    ~Enchant(){};
    int attack(Character* character) const{
	srand(time(NULL));
	if(rand()%2){
	        std::cout<< "You have successfully enchanted the enemy with your ";
		character->getWeapon()->weapon();
		std::cout << ", they have suffered damage.\n";
		return 1;
	}
	else{
	        std::cout<< "The enchantment with your ";
		character->getWeapon()->weapon();
		std::cout << " was not successful. The enemy remains strong. \n";
		return 0;
	} 
	//return -1;
    }
};

#endif //__ENCHANT_HPP__
