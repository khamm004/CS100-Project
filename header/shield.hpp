#ifndef __SHIELD_HPP__
#define __SHIELD_HPP__

#include "defense.hpp"

class Shield: public Defense{
    public:    
    	Shield():Defense(){
		protectionLevel = 10;
	    }

    	void defend(){
        	std::cout << "I will protect myself with my Sheild!" << std::endl;
    	}
};

#endif //__SHIELD_HPP__
