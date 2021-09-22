// Formative 01.02 - Enum animals.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#pragma region Global
enum class Animal : char
{
    Tiger = 't',
    Snake = 's',
    Dog = 'd',
    Chicken = 'c'
};

void printScream(Animal animal_) {

    switch (animal_)
    {   
    case Animal::Tiger:
        std::cout << "Rororororaoaoaor";
        break;
    case Animal::Snake:
        std::cout << "Sssssssssssssssss";
        break;
    case Animal::Dog:
        std::cout << "Wooooooofffff";
        break;
    case Animal::Chicken:
        std::cout << "Cot cot cot codec";
        break;
    default:
        std::cout << ".................";
        break;
    }

};
#pragma endregion

int main()
{
    char myAnimal = 'x';
    
    do
    {
        std::cout << "Do you know the screams of the animals ??" << std::endl;
        std::cout << "Tiger (t) : " << std::endl;
        std::cout << "Snake (s)" << std::endl;
        std::cout << "Dog (d)" << std::endl;
        std::cout << "Chicken (c)" << std::endl;
        std::cout << "Other letter if not interested" << std::endl;

        std::cin >> myAnimal;

        // Simple
        if (myAnimal == 'c') {
            // Chicken ----------------------------
            printScream(Animal::Chicken);
        }
        // etc.....................

        // Advanced version
        switch (static_cast<Animal>(myAnimal))
        {
        case Animal::Tiger:
        case Animal::Snake:
        case Animal::Dog:
        case Animal::Chicken:
            printScream(static_cast<Animal>(myAnimal));
            break;
        default:
            return EXIT_FAILURE;
            break;
        }

        std::cout << std::endl;

    } while (true);

}