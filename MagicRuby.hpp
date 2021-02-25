#include "Defense.hpp"


class MagucRuby: public Defense{
    
    MagicRuby(){
  	protectionLevel = 15;
    }

    void defend(){
        std::cout << "I will protect myself with my Magic Ruby!" << std::endl;
    }
};
