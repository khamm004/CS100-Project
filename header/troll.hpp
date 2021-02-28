#ifndef __TROLL_HPP__
#define __TROLL_HPP__

#include "character.hpp"
#include "Axe.hpp"
#include "iron_gauntlet.hpp"

class Troll: public Character{
    public:
    	Troll(): Character(){
            weapon = new Axe();
            defense = new IronGauntlet();
	    attack = nullptr;
    	}
	
	~Troll(){}
};

#endif //__TROLL_HPP__
