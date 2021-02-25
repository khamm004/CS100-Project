#ifndef __IRONGAUNTLET_HPP__
#define __IRONGAUNTLET_HPP__

#include "Defense.hpp"

class IronGauntlet: public Defense{
    public:
    	IronGauntlet(): Defense(){
		protectionLevel = 10;
    	}

    	void defend(){
        	std::cout << "I will protect myself with my Iron Gauntlet!" << std::endl;
    	}
};

#endif //__IRONGAUNTLET_HPP__
