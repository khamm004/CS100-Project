#ifndef __ELF_HPP__
#define __ELF_HPP__

#include "character.hpp"
#include "BowAndArrow.hpp"
#include "magic_ruby.hpp"

class Elf: public Character{
    public:
    	Elf(): Character(){
            Weapons* weapon = new BowAndArrow();
            Defense* defense = new MagicRuby();
    	}

        ~Elf(){
            delete weapon;
            delete defense;
        }

};

#endif //__ELFF_HPP__
