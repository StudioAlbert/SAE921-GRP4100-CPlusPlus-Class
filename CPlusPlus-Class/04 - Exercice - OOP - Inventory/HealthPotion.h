#pragma once
#include "Potion.h"
class HealthPotion :
    public Potion
{

public:
    HealthPotion(int healthValue = 0);

    void use() override;
    std::string getType() override;
    void display() override;

};

