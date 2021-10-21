// 06 - Program structure - Exercice - Function pointer.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

int displayInt(int result)
{
    // Fill the function to display an int
    std::cout << result << std::endl;
    return 0;
}

int main()
{
    // Create a variable to call the function above
    int (*ptrDisplay) (int);
    ptrDisplay = displayInt;

    // Some numbers
    const std::vector<int> numbers = { 12,54,42,42,56,78 };

    for (auto number : numbers)
    {
	    // use the function pointer to call displayInt
        int result = ptrDisplay(number);
    }

}
