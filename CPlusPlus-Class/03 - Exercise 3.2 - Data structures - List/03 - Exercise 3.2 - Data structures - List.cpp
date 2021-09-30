// 03 - Exercise 2.1 - Data structures - Vector.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>

void displayList(std::list<int> list_)
{
	std::cout << "My list :";
	for (auto v : list_)
	{
		std::cout << v << '\t';
	}
	std::cout << std::endl;
}

int main()
{
	std::list<int> numbers;
	srand(time(NULL));

	// Affectation tableau
	for (int i = 0; i < 12; i++)
	{
		numbers.push_back(1 + rand() % 20);
	}
	displayList(numbers);

	// Point on first element
	std::list<int>::iterator it = numbers.begin();
	// Iterates until we end the list
	while (it != numbers.end())
	{
		if (*it % 2 == 0)
		{
			// the erase jump on the next element
			it = numbers.erase(it);
		}
		else
		{
			// if we don't erase, we have to jump manually
			++it;
		}
	}

	displayList(numbers);
}
