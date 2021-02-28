#ifndef __TROLLFACTORY_HPP__
#define __TROLLFACTORY_HPP__

class TrollFactory : public CharacterFactory {
        private:
                Weapon* createWeapon();
                Defense* createDefense();
        public:
                Character* createCharacter();
};

#endif
