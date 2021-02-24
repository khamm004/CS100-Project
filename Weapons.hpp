#ifndef __WEAPONS_HPP__
#define __WEAPONS_HPP__

#include <iostream>
#include <cstring>

class Weapons {
	private:
		int damage;
	public:
		void setDamage(int dam){
			damage = dam;
		}

		int getDamage(){
			return damage;
		}

		virtual void weapon() = 0;
};
                
#endif //__WEAPON_HPP__
