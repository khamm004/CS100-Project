#include "Defense.hpp"

class Shield: public Defense{

    void defend(){
        std::cout << "I will protect myself with my Sheild!" << std::endl;
    }
};
