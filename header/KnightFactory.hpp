#ifndef __KNIGHTFACTORY_HPP__
#define __KNIGHTFACTORY_HPP__

#include "CharacterFactory.hpp"

class KnightFactory : public CharacterFactory {
        private:
        	//Weapon* createWeapon();
        	//Defense* createDefense();
        	Weapon* w;
                Defense* d;
        public:
		~KnightFactory() {
			delete w;
			delete d;
		}
                Character* createCharacter() {
                        d = createDefense();
                        w = createWeapon();
                        Character* charac = new Knight(d,w);
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
