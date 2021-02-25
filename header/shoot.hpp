#ifndef __SHOOT_HPP__
#define __SHOOT_HPP__
#include <iostream>
#include <cstring>

class Shoot: public Attack
{
public:
    std::string attack(){
        srand(time(NULL));
        if(rand()%2){
            return /*std::cout <<*/ "You have successfully shot the enemy \n they have been significantly weakened \n";
        }
        else{
            return /*std::cout <<*/ "The shot was not successful \n the enemy remains strong \n";
        }
    }
};

#endif //__SHOOT_HPP__

