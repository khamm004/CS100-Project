#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "Weapons.hpp"
#include "defense.hpp"
#include "attack.hpp"

#include <cstring>

class Character{
    protected:
        Weapons* weapon;
        Defense* defense;
        Attack* attack;
        int health;

    public:
        Character(){
	    weapon = nullptr;
	    defense = nullptr;
	    attack = nullptr;
	    health = 100;
	  }

        ~Character(){
	    if (weapon != nullptr)
	    	delete weapon;
	    if (defense != nullptr)
		delete defense;
	    if (attack != nullptr)
	    	delete attack;
	    }

        Attack* GetAttack(){
            return this->attack;
        }

        void SetAttack(Attack* atk){
            attack = atk;
        }

	      void setHealth(int h){
            health = h;

            if (h < 0) { 
                    std::invalid_argument ia = std::invalid_argument(std::to_string(h));
                    throw ia;
                }
        }
	
        int getHealth(){
            return health;
        }

        Weapons* getWeapon(){
          return weapon;
        }

        Defense* getDefense(){
          return defense;
        }
};

#endif //__CHARACTER_HPP__
