#ifndef VILLAGE
#define VILLAGE
#include "NPC.hpp"
#include "Hero.hpp"
#include <string>

class Village {
private:
	std::string name;
	int population;
public:
	Village(std::string, int, std::string[]);
	void addNPC(NPc* npc);
	void removeNPC(NPc* npc);
	void addHero(Hero* hero);
	void removeHero(Hero* hero);
};

#endif // !VILLAGE