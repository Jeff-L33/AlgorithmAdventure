#ifndef INTERACTABLE
#define INTERACTABLE

class GameCharacter;

class Interactable
{
public:
	virtual void interactWith(GameCharacter& character) = 0;
	virtual void trade(GameCharacter& character) = 0;
	virtual void attack(GameCharacter& character) = 0;
	virtual ~Interactable() = default;
};
#endif // !INTERACTABLE
