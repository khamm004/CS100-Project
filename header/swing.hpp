#ifndef __SWING_HPP__
#define __SWING_HPP__
#include <iostream>
#include <cstring>

class Swing: public Attack
{
public:
    virtual std::string attack(){
        srand(time(NULL));
        if(rand()%2){
            std::cout << "The enemy has successfully swung his axe and hit you \n You have been significantly wounded \n"
        }
        else{
            std::cout << "The enamy swung at you but was not successful \n you remain strong \n"
        }
    }
};

#endif //__SWING_HPP__

