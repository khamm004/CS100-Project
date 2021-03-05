#ifndef __FAIRYFACTORY_HPP__
#define __FAIRYFACTORY_HPP__

#include "CharacterFactory.hpp"
#include "fairy.hpp"
#include "character.hpp"

class FairyFactory : public CharacterFactory {
	private:
		//Weapon* createWeapon();
		//Defense* createDefense();
		Weapons* w;
		Defense* d;
	public:
		~FairyFactory(){
			delete w;
			delete d;
		}

		Character* createCharacter() {
			d = createDefense();
			w = createWeapon();
			Character* charac = new Fairy(w,d);
			return charac;
		}
		Weapons* getWeapon(){
			return w;
		}

		Defense* getDefense(){
			return d;
		}
};

#endif
