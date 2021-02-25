#ifndef __SWORD_HPP__
#define __SWORD_HPP__

#include "Weapons.hpp"
#include <iostream>
#include <cstring>

class Sword : public Weapons {
	public:
        	Sword() : Weapons(){
                	damage = 25;
        	}

        	void weapon(){
                	std::cout << "You, a knight, decided to use a sword as a weapon." << std::endl;
        	}
};

#endif
