#ifndef __WAND_HPP__
#define __WAND_HPP__

#include "Weapons.hpp"
#include <iostream>
#include <cstring>
class Wand : public Weapons {
	public:
       		Wand() : Weapons(){
                	damage = 20;
       		}

        	void weapon() {
                	std::cout << "You, a fairy, decided to use a wand as a weapon." << std::endl;
       		}
};

#endif
