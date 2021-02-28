#ifndef __TROLL_HPP__
#define __TROLL_HPP__

#include "character.hpp"
#include "Axe.hpp"
#include "iron_gauntlet.hpp"

class Troll: public Character{
    public:
    	Troll(): Character(){
            Weapons* weapon = new Axe();
            Defense* defense = new IronGauntlet();
    	}

        ~Troll(){
            delete weapon;
            delete defense;
        }

};

#endif //__TROLL_HPP__
