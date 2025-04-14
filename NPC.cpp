#include "NPC.hpp"

NPc::NPc(std::string name, int health) : GameCharacter(name, health, 1)
{
	this->name = name;
	this->health = health;
}
void NPc::interactWith(GameCharacter & character)
{
	// Implementation of interaction with a GameCharacter
}
void NPc::trade(GameCharacter & character)
{
	// Implementation of trading with a GameCharacter
}
void NPc::defend(GameCharacter & character)
{
	// Implementation of attacking a GameCharacter
} 
