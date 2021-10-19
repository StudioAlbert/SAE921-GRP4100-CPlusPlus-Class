#pragma once
#include <random>

#include "Weapon.h"
class Bow :
    public Weapon
{

private:
	float difficulty_;

    std::default_random_engine generator;
    std::uniform_int_distribution<int> randomRange;

public:
    Bow(std::string name, std::string description, int damage, float difficulty);

    void use() override;
    void display();
    std::string getType() override;

};

