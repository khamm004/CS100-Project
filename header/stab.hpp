#ifndef __STAB_HPP__
#define __STAB_HPP__
#include <iostream>
#include <cstring>

class Stab: public Attack
{
public:
    virtual std::string attack(){
        srand(time(NULL));
        if(rand()%2){
            return /*std::cout <<*/ "You have successfully stabbed the enemy \n they are significantly wounded \n";
        }
        else{
            return /*std::cout <<*/ "Your attempt to stab the enemy was not successful \n the enemy remains strong \n";
        }
    }
};

#endif //__STAB_HPP__

