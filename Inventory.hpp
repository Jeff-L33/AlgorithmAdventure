#ifndef INVENTORY
#define INVENTORY
#include "Item.hpp"
#include <vector>

class Inventory
{
private:
	std::vector<Item> slots;

public:
	Inventory();
	void addItem(const Item& item);
	void removeItem(const std::string& itemName);
	Item getItem(int index) const;
	int getSize() const;
	void displayItems() const;
};
#endif // !INVENTORY
