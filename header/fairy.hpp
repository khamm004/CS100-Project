#ifndef __FAIRY_HPP__
#define __FAIRY_HPP__

#include "character.hpp"
#include "Wand.hpp"
#include "dust.hpp"

class Fairy: public Character{
    public:
    	Fairy(): Character(){
            Weapons* weapon = new Wand();
            Defense* defense = new Dust();
    	}

        ~Fairy(){
            delete weapon;
            delete defense;
        }

};

#endif //__FAIRY_HPP__
