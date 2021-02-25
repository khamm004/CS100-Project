#include "Defense.hpp"


class IronGauntlet: public Defense{
    
    IronGauntlet(){
	protectionLevel = 10;
    }

    void defend(){
        std::cout << "I will protect myself with my Iron Gauntlet!" << std::endl;
    }
};
