#ifndef ITEM
#define ITEM
#include <string>
#include <iostream>

class Item
{
private:
	std::string name;
	int value;
public:
	Item() : name(""), value(0) {}
	std::string getName() const { return name; }
	int getValue() const { return value; }
	void setName(std::string name) { this->name = name; }
	void setValue(int value) { this->value = value; }
	void display() const {
		std::cout << "Item Name: " << name << ", Value: " << value << std::endl;
	}
};
#endif // !ITEM
