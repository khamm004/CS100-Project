#ifndef __SWING_HPP__
#define __SWING_HPP__
#include "attack.hpp"
#include <iostream>
#include <cstring>

class Swing: public Attack
{
public:
    virtual std::string attack() const{
        srand(time(NULL));
        if(rand()%2){
            	std::string temp = "The enemy has successfully swung his axe and hit you \n You have been significantly wounded \n";
		return temp;
        }
        else{
		std::string temp = "The enamy swung at you but was not successful \n you remain strong \n";
                return temp;
        }
    }
};

#endif //__SWING_HPP__

