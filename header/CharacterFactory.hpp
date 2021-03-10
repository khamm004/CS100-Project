#ifndef __CHARACTERFACTORY_HPP__
#define __CHARACTERFACTORY_HPP__
#include "character.hpp"
#include "Weapons.hpp"
#include "defense.hpp"

class CharacterFactory {
	protected:
		virtual Weapons* createWeapon() = 0;
		virtual Defense* createDefense() = 0;	

	public:
		virtual Character* createCharacter() = 0;

};

#endif
