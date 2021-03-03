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
		            ~ElfFactory(){
                        delete w;
                        delete d;
                }

                Character* createCharacter() {
                        d = createDefense();
                        w = createWeapon();
                        Character* charac = new Elf(d,w);
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
