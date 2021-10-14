#pragma once
#include <string>

class Item
{

public:
	virtual void use() = 0;
	virtual void display() = 0;
	virtual std::string getType() = 0;

};

