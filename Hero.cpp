#include "Hero.hpp"

Hero::Hero(std::string name, int health) : GameCharacter(name, health, 10) 
{
	this->name = name;
	this->health = health;
}

void Hero::interactWith(GameCharacter& character)
{
	// Implementation of interaction with a GameCharacter
}

void Hero::trade(GameCharacter& character)
{
	// Implementation of trading with a GameCharacter
}

void Hero::attack(GameCharacter& character)
{
	// Implementation of attacking a GameCharacter
}
