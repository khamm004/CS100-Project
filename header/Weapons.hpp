#ifndef __WEAPONS_HPP__
#define __WEAPONS_HPP__

#include <iostream>
#include <cstring>

class Weapons {
	protected:
		int damage;
	public:
		Weapons(){}

		void setDamage(int dam){
			damage = dam;
			if(dam < 0){
				std::invalid_argument ia = std::invalid_argument(std::to_string(dam));
        			throw ia;
			}
		}

		int getDamage(){
			return damage;
		}

		virtual void weapon() = 0;
};
                
#endif //__WEAPON_HPP__
