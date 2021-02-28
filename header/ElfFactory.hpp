#ifndef __ELFFACTORY_HPP__
#define __ELFFACTORY_HPP__

#include "CharacterFactory.hpp"

class ElfFactory : public CharacterFactory {
        private:
               //Weapon* createWeapon();
               //Defense* createDefense();
        	Weapon* w;
		Defense* d;
	public:
                Character* createCharacter() {
                        d = createDefense();
                        w = createWeapon();
                        Character* charac = new Elf(d,w);
                        return charac;
                }

};


#endif
