#include "Defense.hpp"

class Dust: public Defense{
    
    Dust(){
        protectionLevel = 15;
    }
   
    void defend(){
    	std::cout << "I will protect myself with my Magic Dust!" << std::endl;
    }
};
