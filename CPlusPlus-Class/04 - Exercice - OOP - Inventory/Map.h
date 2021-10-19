#pragma once
#include <string>

#include "Item.h"
class Map :
    public Item
{

private:
    std::string land_;

public:
    Map(std::string name, std::string description, std::string land);

    void use() override;
    void display();
    std::string getType() override;

    std::string getLand();

};

