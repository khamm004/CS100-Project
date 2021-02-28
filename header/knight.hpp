#ifndef __KNIGHT_HPP__
#define __KNIGHT_HPP__

#include "character.hpp"
#include "Sword.hpp"
#include "shield.hpp"

class Knight: public Character{
    public:
    	Knight(): Character(){
            Weapons* weapon = new Sword();
            Defense* defense = new Shield();
    	}

        ~Knight(){
            delete weapon;
            delete defense;
        }

};

#endif //__KNIGHT_HPP__
