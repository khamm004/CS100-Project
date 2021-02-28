#ifndef __KNIGHT_HPP__
#define __KNIGHT_HPP__

#include "character.hpp"

class Knight: public Character{
    public:
    	Kinght(): Character(){
            Weapon* weapon = new Sword();
            Defense* defense = new Shield();
        	health = 50;
    	}

        ~Kinght(){
            delete weapon;
            delete defense;
        }

};

#endif //__KNIGHT_HPP__
