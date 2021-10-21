// 06 - Program structure - Exercice - Function pointer.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

int main()
{

    // Some numbers
    const std::vector<int> numbers = { 12,54,42,42,56,78 };

    // Fill the  gaps in the lambda expression, display the value of an integer
    auto display = [](int n) {std::cout << "n=" << n << std::endl; };

    // Using the capture by reference :
    // Write a lambda expression substracting a captured element to a parameter
    int a = 5;
    auto substract = [a](int n) {return n - a; };


    // Use the lambda into the for loop below
    for (auto number : numbers)
    {
        // Make the substract
        number = substract(number);
        // Display the result
        display(number);
    }

    
}
