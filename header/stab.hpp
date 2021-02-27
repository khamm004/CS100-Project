#ifndef __STAB_HPP__
#define __STAB_HPP__
#include "attack.hpp"
#include <iostream>
#include <string>

class Stab: public Attack
{
public:
    virtual std::string attack() const{
        srand(time(NULL));
        if(rand()%2){
            	std::string temp = "You have successfully stabbed the enemy \n they are significantly wounded \n";
        	return temp;
	}
        else{
            	std::string temp = "Your attempt to stab the enemy was not successful \n the enemy remains strong \n";
        	return temp;
	}
    }
};

#endif //__STAB_HPP__

