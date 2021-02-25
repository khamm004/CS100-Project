#include "Defense.hpp"


class Shield: public Defense{
    
    Shield(){
	protectionLevel = 10;
    }

    void defend(){
        std::cout << "I will protect myself with my Sheild!" << std::endl;
    }
};
