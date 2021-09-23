// 01.02 - Exercises- Strings - Exercise 03.cpp :
// Exercise 3
/*

Write a C++ program to reverse a given string.
Example:
Sample Input : w3resource
Sample Output : ecruoser3w

 */

#include <iostream>
#include <string>

int main()
{
	// Original message -----------------------------------------------------------------------------------------
	std::string input = "w3resource";
	std::string output;

	std::cout << input << std::endl << std::endl;

	for(int i = (input.size() -1); i > 0; --i)
	{
		output.push_back(input.at(i));
	}

	std::cout << output << std::endl << std::endl;

}