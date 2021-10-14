#pragma once
#include "Potion.h"
class ForcePotion :
    public Potion
{

public:
    ForcePotion(int buffValue = 0);


    void use() override;
    std::string getType() override;
    void display() override;
};

