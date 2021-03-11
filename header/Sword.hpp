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
                	std::cout << "sword";
        	}
};

#endif
