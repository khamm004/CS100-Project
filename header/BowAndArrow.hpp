#ifndef __BOWANDARROW_HPP__
#define __BOWANDARROW_HPP__

#include "Weapons.hpp"
#include <iostream>
#include <cstring>

class BowAndArrow : public Weapons {
        public:
		BowAndArrow() : Weapons() {
               		damage = 15;
        	}
		
        	void weapon() {
                	std::cout << "bow and arrows";
        	}
};

#endif
