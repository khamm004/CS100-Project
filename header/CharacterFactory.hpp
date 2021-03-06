#ifndef __CHARACTERFACTORY_HPP__
#define __CHARACTERFACTORY_HPP__

class CharacterFactory {
	protected:
		virtual Weapons* createWeapon() = 0;
		virtual Defense* createDefense() = 0;	

	public:
		virtual Character* createCharacter() = 0;

};

#endif
