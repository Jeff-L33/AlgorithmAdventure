#ifndef HERO
#define HERO
#include "GameCharacter.hpp"

class Hero : public GameCharacter
{
public:
	Hero(std::string, int);

	void interactWith(GameCharacter& character);

	void trade(GameCharacter& character);

	void attack(GameCharacter& character);
	
};

#endif // !HERO
