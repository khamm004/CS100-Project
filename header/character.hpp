#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <cstring>

class Character
{
private:
	Weapon* weapon;
	Defense* defense;
	Attack* attack;
	int health;

public:
	~Character(){
		delete attack;
	}

	Attack* GetAttack(){
		return this->attack;
	}

	void SetAttack(Attack* atk){
		attack = atk;
	}
	
	void setHealth(int h){
		health = h;
	}	

	int getHealth(){
		return health;
	}

};

#endif //__CHARACTER_HPP__
