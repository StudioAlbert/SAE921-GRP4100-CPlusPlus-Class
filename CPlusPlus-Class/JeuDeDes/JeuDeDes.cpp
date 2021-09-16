// JeuDeDes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    
    /* initialize random seed: */
    
    srand(time(NULL));

    // Je tire 30 fois les dés
    for (int i = 0; i < 30; i++)
    {
        std::cout << "Time null = " << time(NULL) << std::endl;
        
        // Un tirage
        int tirageDe1 = 1 + (rand() % 6);
        int tirageDe2 = 1 + (rand() % 6);

        // Affichage du tirage
        std::cout << "Tirage " << tirageDe1 << ":" << tirageDe2 << std::endl;
    }
    
    
    
}
