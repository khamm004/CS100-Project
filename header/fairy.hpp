#ifndef __FAIRY_HPP__
#define __FAIRY_HPP__

#include "character.hpp"
#include "Wand.hpp"
#include "dust.hpp"

class Fairy: public Character{
    public:
    	Fairy(): Character(){
            weapon = new Wand();
            defense = new Dust();
	    attack = nullptr;
    	}
	Fairy(Weapons* w, Defense* d) : Character() {
		weapon = new Wand();
		defense = new Dust();
		attack = nullptr;
	}
	
	~Fairy(){}
};

#endif //__FAIRY_HPP__
