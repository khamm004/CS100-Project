#ifndef __FAIRYFACTORY_HPP__
#define __FAIRYFACTORY_HPP__

#include "CharacterFactory.hpp"

class FairyFactory : public CharacterFactory {
	private:
		//Weapon* createWeapon();
		//Defense* createDefense();
		Weapon* w;
		Defense* d;
	public:
		~FairyFactory(){
			delete w;
			delete d;
		}

		Character* createCharacter() {
			d = createDefense();
			w = createWeapon();
			Character* charac = new Fairy(d,w);
			return charac;
		}
		Weapon* getWeapon(){
			return w;
		}

		Defense* getDefense(){
			return d;
		}
};

#endif
