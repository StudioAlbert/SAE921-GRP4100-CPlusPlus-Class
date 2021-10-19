#pragma once
#include "Item.h"
class Potion :
    public Item
{

protected:
    int value_;

public:
    Potion(std::string name, std::string description, int value = 0);
    int getValue();
    std::string getType() override;

};

