#pragma once
#include "Potion.h"
class HealthPotion :
    public Potion
{

public:
    HealthPotion(std::string name, std::string description, int healthValue = 0);

    void use() override;
    std::string getType() override;
    void display();

};

