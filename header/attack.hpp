#ifndef __ATTACK_HPP__
#define __ATTACK_HPP__

//#include <string>
#include "character.hpp"

class Character;

class Attack
{
public:
   ~Attack(){};
   virtual int attack(Character* character) const = 0;
};

#endif //__ATTACK_HPP__
