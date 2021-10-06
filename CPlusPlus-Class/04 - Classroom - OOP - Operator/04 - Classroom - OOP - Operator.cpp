// 04 - Classroom - OOP - Operator.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Point.h"

int main()
{
    std::cout << "Hello World!\n";

    Point firstPoint;
    firstPoint.x = rand() % 20 - 10;
    firstPoint.y = rand() % 20 - 10;
	firstPoint.displayPoint();

    Point secondPoint;
    secondPoint.x = rand() % 20 - 10;
    secondPoint.y = rand() % 20 - 10;
    secondPoint.displayPoint();

    std::cout << "Is first more far than second ? " << (firstPoint > secondPoint) << std::endl;
    (firstPoint + secondPoint).displayPoint();

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
