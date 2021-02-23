#ifndef __WEAPONS_HPP__
#define __WEAPONS_HPP__

#include <iostream>
#include <cstring>
/*
class Character_AbstractProduct : public Character_Factory {
	private:
		Weapons* weapons;
	public:
		Weapons* CreateWeapon () {
			return new Weapons;
		}
};*/

class Weapons {
	private:
		int damage;
	public:
		virtual int setDamage() = 0;
};

class Wand_Product : public Weapons {
	private: 
		//Fairy* fairy;
		int damage;
	public:
		int setDamage() {
			cout << "You, a fairy, decided to use a wand as a weapon." << endl;
			damage += 10;
		}
		
};

class Sword_Product : public Weapons {
        private:
                //Knight* knight;
                int damage;
        public:
                int setDamage() {
			cout << "You, a knight, decided to use a sword as a weapon." << endl;
                        damage += 15;
                }

};


class BowAndArrow_Product : public Weapons {
        private:
                //Elf* elf;
                int damage;
        public:
                int setDamage() {
			cout << "You, an elf, decided to use a bow and arrow as a weapon." << endl;
                        damage += 13;
                }

};

class Axe_Product : public Weapons {
        private:
                //Troll* troll;
                int damage;
        public:
                int setDamage() {
			cout << "The troll decided to use an axe." << endl;
                        damage -= 20;
                }

};
#endif //__WEAPON_HPP__
