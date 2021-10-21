// 06 - Classroom - Program Structure - Function.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Functions.h"

int main()
{
    // Multiple prototypes
	float f_a, f_b;
    f_a = 5.0f;
    f_b = 10.0f;
    std::cout << max(f_a, f_b) << std::endl;

    int i_a, i_b;
    i_a = 5;
    i_b = 10;
    std::cout << max(i_a, i_b) << std::endl;

    // Default values
    strOut("My String");
    strOut();

    // Function pointers
    std::cout << "Function pointers" << std::endl;


    ptrFunc = mult;
    std::cout << ptrFunc(3, 4) << std::endl;

    ptrFunc = add;
    std::cout << ptrFunc(3, 4) << std::endl;

    
    Division myDiv;
    std::cout << myDiv(1.0f, 3.0f) << std::endl;
    std::cout << "Function pointers in a class" << std::endl;

    Functions myFuncs;
    myFuncs.myFunc = mult;
    std::cout << myFuncs.myFunc(3, 4) << std::endl;

    myFuncs.myFunc = add;
    std::cout << myFuncs.myFunc(3, 4) << std::endl;


    // Lambda
    std::cout << division_lambda(1.0f, 6.0f) << std::endl;

    float local_result = [](float val, float div) {
        return val / div;
    }(2, 15);
    std::cout << local_result  << std::endl;

}
