#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

class Character
{
private:
	Attack* attack;

public:
	void SetAttack(Attack* atk){
		attack = atk;
	}

};

#endif //_ _CHARACTER_HPP__
