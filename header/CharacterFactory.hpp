#ifndef __CHARACTERFACTORY_HPP__
#define __CHARACTERFACTORY_HPP__

class CharacterFactory {
	protected:
		Weapon* createWeapon();
		Defense* createDefense();	

	public:
		virtual Character* createCharacter() = 0;
};

#endif
