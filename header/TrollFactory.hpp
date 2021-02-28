#ifndef __TROLLFACTORY_HPP__
#define __TROLLFACTORY_HPP__

#include "CharacterFactory.hpp"

class TrollFactory : public CharacterFactory {
        private:
                //Weapon* createWeapon();
                //Defense* createDefense();
        	Weapon* w;
		Defense* d;
	public:
                Character* createCharacter() {
                        Defense* d = createDefense();
                        Weapon* w = createWeapon();
                        Character* charac = new Troll(d,w);
                        return charac;
                }
};

#endif
