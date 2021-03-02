#ifndef __KNIGHT_HPP__
#define __KNIGHT_HPP__

#include "character.hpp"
#include "Sword.hpp"
#include "shield.hpp"

class Knight: public Character{
    public:
    	Knight(): Character(){
            weapon = new Sword();
            defense = new Shield();
	    attack = nullptr;
    	}

	~Knight(){}
};

#endif //__KNIGHT_HPP__
