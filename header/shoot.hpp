#ifndef __SHOOT_HPP__
#define __SHOOT_HPP__
#include "attack.hpp"
#include <iostream>
#include <string>

class Shoot: public Attack
{
public:
    std::string attack() const{
        srand(time(NULL));
        if(rand()%2){
                std::string temp = "You have successfully shot the enemy \n they have been significantly weakened \n"; 
		return temp;
        }
        else{
            	std::string temp = "The shot was not successful \n the enemy remains strong \n"; 
		return temp;
        }	
    }
};

#endif //__SHOOT_HPP__

