#pragma once

#include <iostream>

class Animal
{

	private:
		int food_ = 0;

	public:
		Animal(int foodInit_);
		~Animal();

		void eat(int);
		void drink();
		void play();

		void print();

};

