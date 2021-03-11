#ifndef __FIGHT_TEST_HPP__
#define __FIGHT_TEST_HPP__

#include "../header/fightsequence.hpp"

TEST(FIGHT, ElfBattle){
        CharacterFactory* elfFact = new ElfFactory();
        Character* elf = elfFact->createCharacter();
        fight_sequence(elf);
        delete elfFact;
}

TEST(FIGHT, FairyBattle){
        CharacterFactory* fairyFact = new FairyFactory();
        Character* fairy = fairyFact->createCharacter();
        fight_sequence(fairy);
        delete fairyFact;
}

TEST(FIGHT, KnightBattle){
        CharacterFactory* knightFact = new KnightFactory();
        Character* knight = knightFact->createCharacter();
        fight_sequence(knight);
        delete knightFact;
}


#endif
