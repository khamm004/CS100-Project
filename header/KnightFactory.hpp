#ifndef __KNIGHTFACTORY_HPP__
#define __KNIGHTFACTORY_HPP__

#include "CharacterFactory.hpp"
#include "knight.hpp"
#include "character.hpp"

class KnightFactory : public CharacterFactory {
        private:
        	//Weapons* w = createWeapon();
        	//Defense* d = createDefense();
        	Weapons* w;
                Defense* d;
	protected:
		Weapons* createWeapon(){
			return new Sword();
		}

		Defense* createDefense(){
			return new Shield();
		}
        public:
		~KnightFactory() {
			delete w;
			delete d;
		}
                Character* createCharacter() {
                        d = createDefense();
                        w = createWeapon();
                        Character* charac = new Knight(w,d);
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
