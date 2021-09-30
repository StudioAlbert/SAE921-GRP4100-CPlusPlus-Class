// 03 - Exercise 2.1 - Data structures - Vector.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

void displayVector(std::vector<int> vector_)
{
	std::cout << "My vector :";
	for(auto v : vector_)
	{
		std::cout << v << '\t';
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> numbers;
	srand(time(NULL));

	// Affectation tableau
	for (int i = 0; i < 12; i++)
	{
		numbers.push_back(1 + rand() % 20);
	}
	displayVector(numbers);

	// seek the smallest position
	std::vector<int>::iterator minPos = numbers.begin();
	int minVal = numbers[0];

	for(std::vector<int>::iterator it = numbers.begin(); it < numbers.end(); it++)
	{
		if(minVal > *it)
		{
			minVal = *it;
			minPos = it;
		}
	}

	std::cout << "Min val is : " << minVal << std::endl;
	std::cout << "Min pos check : " << *minPos << std::endl;

	numbers.insert(minPos + 1, minVal, 0);

	displayVector(numbers);

}
