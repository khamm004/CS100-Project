#ifndef __ELF_HPP__
#define __ELF_HPP__

#include "character.hpp"

class Elf: public Character{
    public:
    	Elf(): Character(){
            Weapon* weapon = new BowAndArrow();
            Defense* defense = new MagicRuby();
        	health = 50;
    	}

        ~Elf(){
            delete weapon;
            delete defense;
        }

};

#endif //__ELFF_HPP__
