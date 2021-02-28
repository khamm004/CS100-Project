#ifndef __ELFFACTORY_HPP__
#define __ELFFACTORY_HPP__

class ElfFactory : public CharacterFactory {
        private:
                Weapon* createWeapon();
                Defense* createDefense();
        public:
                Character* createCharacter() {
                        Defense* d = createDefense();
                        Weapon* w = createWeapon();
                        Character* charac = new Elf(d,w);
                        return charac;
                }

};


#endif
