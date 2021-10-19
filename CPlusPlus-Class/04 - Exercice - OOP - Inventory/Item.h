#pragma once
#include <string>

class Item
{

protected:
	std::string name_;
	std::string description_;

public:
	Item(std::string name, std::string description);

	virtual void display();

	virtual void use() = 0;
	virtual std::string getType() = 0;

};

