#ifndef NPC
#define NPC
#include "GameCharacter.hpp"

class NPc : public GameCharacter
{
public:
	NPc(std::string, int);

	void interactWith(GameCharacter& character);

	void trade(GameCharacter& character);

	void defend(GameCharacter& character);

};


#endif // !NPC