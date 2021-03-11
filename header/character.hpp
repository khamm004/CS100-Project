#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "Weapons.hpp"
#include "defense.hpp"
#include "attack.hpp"

//#include <cstring>
class Attack;

class Character{
    protected:
        Weapons* weapon;
        Defense* defense;
        Attack* attack;
        int health;

    public:
        Character();
        ~Character();
        Attack* GetAttack();
        void SetAttack(Attack* atk);
	      void setHealth(int h);
        int getHealth();
	      Weapons* getWeapon();
	      Defense* getDefense();
};

#endif //__CHARACTER_HPP__
