// 01.02 - Exercise - Array - find the value.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <array>

constexpr int SCORES_LENGTH = 5;

int main()
{
    std::array<int, 10> values = {};

    srand(time(NULL));
    for (int i{ 0 }; i < values.size(); ++i) {
        values[i] = rand() % 21;
        srand(values.at(i));
    }

    for (int i{ 0 }; i < values.size(); ++i) {
        std::cout << values.at(i) << '\t';
        std::cout << values[i] << '\t';
    }

    /*or (auto myValue : values) {
        std::cout << myValue << '\t';
    }*/
    std::cout << std::endl;

    int valueToFind;
    std::cout << "Value to find ?" << std::endl;
    std::cin >> valueToFind;

    for (auto myValue : values) {
        if (valueToFind == myValue) {
            std::cout << "Found :)" << std::endl;
            return EXIT_SUCCESS;
        }
    }

    std::cout << "Not found :(" << std::endl;
    return EXIT_FAILURE;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
