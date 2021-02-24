#include "Weapons.hpp"

class BowAndArrow : public Weapons {
	void weapon() {
		std::cout << "You, an elf, decided to use a bow and arrow as a weapon." << std::endl;
	}
};
