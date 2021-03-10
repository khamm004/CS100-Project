#ifndef __IRON_GAUNTLET_HPP__
#define __IRON_GAUNTLET_HPP__

#include "defense.hpp"

class IronGauntlet: public Defense{
    public:
    	IronGauntlet(): Defense(){
		protectionLevel = 10;
    	}

    	void defend(){
        	std::cout << "I will protect myself with my Iron Gauntlet!" << std::endl;
    	}
};

#endif //__IRON_GAUNTLET_HPP__