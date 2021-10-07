#pragma once
#include <iostream>

class Monster
{

private:
	static int MonsterCount;

public:
	
	int life;
	Monster();

	static void AddMonsterCount()
	{
		MonsterCount++;
	}

	void printInfo()
	{
		std::cout << this->MonsterCount;
	}

};

