#ifndef __FAIRY_HPP__
#define __FAIRY_HPP__

#include "character.hpp"

class Fairy: public Character{
    public:
    	Fairy(): Character(){
            Weapon* weapon = new Wand();
            Defense* defense = new Dust();
        	health = 50;
    	}

        ~Fairy(){
            delete weapon;
            delete defense;
        }

};

#endif //__FAIRY_HPP__
