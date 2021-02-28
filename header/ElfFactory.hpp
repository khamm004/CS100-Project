#ifndef __ELFFACTORY_HPP__
#define __ELFFACTORY_HPP__

class ElfFactory : public CharacterFactory {
        private:
                Weapon* createWeapon();
                Defense* createDefense();
        public:
                Character* createCharacter();
};

#endif
