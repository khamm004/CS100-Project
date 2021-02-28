#ifndef __TROLL_HPP__
#define __TROLL_HPP__

#include "character.hpp"

class Troll: public Character{
    public:
    	Troll(): Character(){
            Weapon* weapon = new Axe();
            Defense* defense = new IronGauntlet();
        	health = 50;
    	}

        ~Troll(){
            delete weapon;
            delete defense;
        }

};

#endif //__TROLL_HPP__
