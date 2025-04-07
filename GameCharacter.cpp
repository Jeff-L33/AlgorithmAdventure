#include "GameCharacter.hpp"


GameCharacter::GameCharacter(std::string& name, int health, int powerlevel)
{
	this->name = name;
	this->health = health;
	this->powerlevel = powerlevel;
}

std::string GameCharacter::getName()
{
	return name;
}

int GameCharacter::getHealth()
{
	return health;
}

int GameCharacter::getPowerLevel()
{
	return powerlevel;
}

void GameCharacter::setName(std::string name)
{
	this->name = name;
}

void GameCharacter::setPowerLevel(int powerLevel)
{
	this->powerlevel = powerLevel;
}

void GameCharacter::setHealth(int health)
{
	this->health = health;
}