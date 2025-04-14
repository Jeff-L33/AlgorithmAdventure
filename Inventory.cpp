#include "Inventory.hpp"
#include "Item.hpp"

Inventory::Inventory() : slots(std::vector<Item>())
{
}

void Inventory::addItem(const Item& item)
{
	slots.push_back(item);
}

void Inventory::removeItem(const std::string& itemName)
{
	for (int i = 0; i < slots.size(); ++i)
	{
		if (slots[i].getName() == itemName)
		{
			slots.erase(slots.begin() + i);
			break;
		}
	}
}

Item Inventory::getItem(int index) const
{
	return Item();
}

int Inventory::getSize() const
{
	return 0;
}

void Inventory::displayItems() const
{
}
