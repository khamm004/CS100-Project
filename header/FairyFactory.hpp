#ifndef __FAIRYFACTORY_HPP__
#define __FAIRYFACTORY_HPP__

class FairyFactory : public CharacterFactory {
	private:
		Weapon* createWeapon();
		Defense* createDefense();
	public:
		Character* createCharacter() {
			Defense* d = createDefense();
			Weapon* w = createWeapon();
			Character* charac = new Fairy(d,w);
			return charac;
		}
};

#endif
