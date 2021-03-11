#ifndef __AXE_HPP__
#define __AXE_HPP__

#include "Weapons.hpp"
#include <iostream>
#include <cstring>

class Axe : public Weapons {
	public:
        	Axe() : Weapons(){
                	damage = 10;
       		}

	        void weapon() {
        	        std::cout << "axe";
        	}
};

#endif
