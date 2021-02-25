#ifndef __ENCHANT_HPP__
#define __ENCHANT_HPP__
#include <iostream>
#include <cstring>

class Enchant: public Attack
{
public:
    virtual std::string attack(){
	srand(time(NULL));
	if(rand()%2){
	    return /*std::cout <<*/ "You have successfully enchanted the enemy \n they will be blinded for 5 seconds \n";
	}
	else{
	    return /*std::cout <<*/ "The enchantment was not successful \n the enemy remains strong \n";
	} 
    }
};

#endif //__ENCHANT_HPP__
