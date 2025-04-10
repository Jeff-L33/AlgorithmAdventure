#include "Inventory.hpp"
#include "Item.hpp"

Inventory::Inventory() : slots(std::vector<Item>())
{
}

void Inventory::addItem(const Item& item)
{
}

void Inventory::removeItem(const std::string& itemName)
{
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
