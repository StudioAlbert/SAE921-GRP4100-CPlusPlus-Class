#pragma once
#include <string>

#include "Weapon.h"

class Sword :
    public Weapon
{
    float modifier_;

public:
    Sword(std::string name, std::string description, int damage, float modifier);

    void use() override;
    void display();
    std::string getType() override;

};

