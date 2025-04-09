#ifndef VILLAIN
#define VILLAIN
#include <string>
#include "GameCharacter.hpp"


class Villain: public GameCharacter
{
public:
	Villain(std::string, int, int);
	void interactWith(GameCharacter& character);
	void trade(GameCharacter& character);
	void attack(GameCharacter& character);
};

#endif // !VILLAIN
