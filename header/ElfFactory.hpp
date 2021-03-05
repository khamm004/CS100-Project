#ifndef __ELFFACTORY_HPP__
#define __ELFFACTORY_HPP__

#include "CharacterFactory.hpp"
#include "elf.hpp"
#include "character.hpp"

class ElfFactory : public CharacterFactory {
        private:
               //Weapon* createWeapon();
               //Defense* createDefense();
        	       Weapons* w;
		       Defense* d;
	      public:
		~ElfFactory(){
                        delete w;
                        delete d;
                }

                Character* createCharacter() {
                        d = createDefense();
                        w = createWeapon();
                        Character* charac = new Elf(w,d);
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
