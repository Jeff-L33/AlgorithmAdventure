#include "Villain.hpp"

Villain::Villain(std::string name, int health, int powerlevel) : GameCharacter(name, health, powerlevel) 
{
	this->name = name;
	this->health = health;
	this->powerlevel = powerlevel;
}
void Villain::interactWith(GameCharacter& character)
{
	// Implementation of interaction with a GameCharacter
}
void Villain::trade(GameCharacter& character)
{
	// Implementation of trading with a GameCharacter
}
void Villain::attack(GameCharacter& character)
{
	// Implementation of attacking a GameCharacter
}