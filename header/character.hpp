#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "weapon.hpp"
#include "defense.hpp"
#include "attack.hpp"

#include <cstring>

class Character{
    private:
        Weapon* weapon;
        Defense* defense;
        Attack* attack;
        int health;

    public:
        Character(){}

        ~Character(){
	    delete attack;
	}

        Attack* GetAttack(){
            return this->attack;
        }

        void SetAttack(Attack* atk){
            attack = atk;
        }

	void sethealth(int h){
            health = h;

            if (h < 0) { 
                    std::invalid_argument ia = std::invalid_argument(std::to_string(h));
                    throw ia;
                }
        }
	
        int getHealth(){
            return health;
        }
};

#endif //__CHARACTER_HPP__
