#ifndef __KNIGHTFACTORY_HPP__
#define __KNIGHTFACTORY_HPP__

class KnightFactory : public CharacterFactory {
        private:
                Weapon* createWeapon();
                Defense* createDefense();
        public:
                Character* createCharacter() {
                        Defense* d = createDefense();
                        Weapon* w = createWeapon();
                        Character* charac = new Knight(d,w);
                        return charac;
                }
};

#endif
