#ifndef __CHARACTERFACTORY_HPP__
#define __CHARACTERFACTORY_HPP__

class CharacterFactory {
	protected:
		Weapon* createWeapon();
		Defense* createDefense();	

	public:
		Character* createCharacter();
};

#endif
