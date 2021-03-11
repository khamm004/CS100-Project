#include "../header/character.hpp"
#include "../header/Weapons.hpp"
#include "../header/defense.hpp"
#include "../header/attack.hpp"

#include <cstring>

	Character::Character(){
            weapon = nullptr;
            defense = nullptr;
            attack = nullptr;
            health = 100;
        }

        Character::~Character(){
            if (weapon != nullptr)
                delete weapon;
            if (defense != nullptr)
                delete defense;
            if (attack != nullptr)
                delete attack;
        }

        Attack* Character::GetAttack(){
            return this->attack;
        }

	void Character::SetAttack(Attack* atk){
            attack = atk;
        }

        void Character::setHealth(int h){
            health = h;

            if (h < 0) {
                    std::invalid_argument ia = std::invalid_argument(std::to_string(h));
                    throw ia;
                }
        }

        int Character::getHealth(){
            return health;
        }

        Weapons* Character::getWeapon(){
                return weapon;
        }

        Defense* Character::getDefense(){
                return defense;
        }
