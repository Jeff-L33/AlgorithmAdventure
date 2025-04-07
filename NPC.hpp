#ifndef NPC
#define NPC
#include <string>
#include "GameCharacter.hpp"
#include "Interactable.hpp"

class Npc : public GameCharacter, public Interactable
{
public:
	Npc(std::string, int, int);
	void act() override;
	void speak() override;
	void interactWith(GameCharater target) override;
	void trade(GameCharater target) override;
	void attack(GameCharater target) override;
};

#endif // !NPC