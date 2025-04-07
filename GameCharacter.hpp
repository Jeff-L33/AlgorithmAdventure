#ifndef GAMECHARACTER
#define GAMECHARACTER

#include <string>
#include "Interactable.hpp"

class GameCharacter : public Interactable
{
protected:
	std::string name;
	int health;
	int powerlevel;
	
public:
	GameCharacter(std::string& name, int health, int powerlevel);
	virtual ~GameCharacter() = default;

	int getHealth();
	void setHealth(int health);

	int getPowerLevel();
	void setPowerLevel(int powerlevel);

	std::string getName();
	void setName(std::string name);
};

#endif // !GAMECHARACTER
