#ifndef __SHOOT_HPP__
#define __SHOOT_HPP__
#include "attack.hpp"
#include <iostream>
#include <string>

class Shoot: public Attack
{
public:
    ~Shoot(){};
    virtual int attack(Character* character) const{
        srand(time(NULL));
	//srand(1);
        if(rand()%2){
                std::cout << "You have successfully shot the enemy with your ";
		character->getWeapon()->weapon();
		std::cout << ", the enemy has been significantly weakened. \n"; 
		return 1;
        }
        else{
            	std::cout << "The shot with your ";
		character->getWeapon()->weapon();
		std::cout << " was not successful, the enemy remains strong. \n"; 
		return 0;
        }	
    }
};

#endif //__SHOOT_HPP__

