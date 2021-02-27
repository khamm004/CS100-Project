#ifndef __ENCHANT_HPP__
#define __ENCHANT_HPP__
#include "attack.hpp"
#include <iostream>
#include <cstring>

class Enchant: public Attack
{
public:
    std::string attack() const{
	srand(time(NULL));
	if(rand()%2){
	        std::string temp = "You have successfully enchanted the enemy \n they will be blinded for 5 seconds \n";
		return temp;
	}
	else{
	        std::string temp = "The enchantment was not successful \n the enemy remains strong \n";
		return temp;
	} 
    }
};

#endif //__ENCHANT_HPP__
