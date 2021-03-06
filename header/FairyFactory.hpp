#ifndef __FAIRYFACTORY_HPP__
#define __FAIRYFACTORY_HPP__

#include "CharacterFactory.hpp"
#include "fairy.hpp"
#include "character.hpp"

class FairyFactory : public CharacterFactory {
	private:
		//Weapons* w = createWeapon();
		//Defense* d = createDefense();
		Weapons* w;
		Defense* d;
	protected:
		Weapons* createWeapon() {
			return new Wand();
		}

		Defense* createDefense() {
			return new Dust();
		}
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
