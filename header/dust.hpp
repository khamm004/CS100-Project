#ifndef __DUST_HPP__
#define __DUST_HPP__

#include "defense.hpp"

class Dust: public Defense{
    public:
    	Dust(): Defense(){
        	protectionLevel = 15;
    	}
   
    	void defend(){
    		std::cout << "I will protect myself with my Magic Dust!" << std::endl;
    	}
};

#endif //__DUST_HPP__