#pragma once
#include "Potion.h"
class ForcePotion :
    public Potion
{

public:
    ForcePotion(std::string name, std::string description, int buffValue = 0);


    void use() override;
    std::string getType() override;
    void display();
};

