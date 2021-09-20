#include <iostream>

int main()
{
    std::string myWord = "francis";
    std::string myInput;

    std::cout << "Before operations : " << myWord << std::endl;
    std::cout << "String size() : " << myWord.size() << std::endl;
    std::cout << "String length() : " << myWord.length() << std::endl;

    // Access a letter
    myWord[1] = 'R';
    std::cout << "After operations : " << myWord << std::endl;

    // Access a letter
    myWord.at(0) = 'F';
    std::cout << "After operations : " << myWord << std::endl;

    std::cout << "please input a word to compare" << std::endl;
    std::cin >> myInput;

    if (myWord.compare(myInput) == 0) {
        std::cout << "The words are equals" << std::endl;
    }
    else {
        std::cout << "The words are different" << std::endl;
    }
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
