// 04 - Exercice - OOP - Fruits.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "AppleTree.h"
#include "CherryTree.h"
#include "PearTree.h"

int main()
{
    std::vector<PearTree> pearTrees(200);
    std::vector<AppleTree> appleTrees(50);
    std::vector<CherryTree> cherryTrees(35);

    float weightHarvested = 0;
    float weightCherriesHarvested = 0;
    float weightApplesHarvested = 0;
    float weightPearsHarvested = 0;

    int nbRecoltes = 1;
    bool contractEnded = false;

    unsigned int idxPearTrees, idxAppleTrees, idxCherryTrees;


    std::cout << "Pear trees ----------------" << std::endl;
    for(auto pt : pearTrees)
    {
        float weight = pt.getWeightAvailable();
        weightPearsHarvested += weight;
    	std::cout << weight << " kg" << std::endl;
    }
    std::cout << "Total : " << weightPearsHarvested << " kg" << std::endl << std::endl;

    std::cout << "Apple trees ----------------" << std::endl;
    for (auto at : appleTrees)
    {
        float weight = at.getWeightAvailable();
        weightApplesHarvested += weight;
        std::cout << weight << " kg" << std::endl;
    }
    std::cout << "Total : " << weightApplesHarvested << " kg" << std::endl << std::endl;

    std::cout << "Cherry trees ----------------" << std::endl;
    for (auto ct : cherryTrees)
    {
        float weight = ct.getWeightAvailable();
        weightCherriesHarvested += weight;
        std::cout << weight << " kg" << std::endl;
    }
    std::cout << "Total : " << weightCherriesHarvested << " kg" << std::endl << std::endl;

    // Recoltes --------------------------------------------------------------------
    idxPearTrees = idxAppleTrees = idxCherryTrees = 0;

	do
    {
        
        weightHarvested = 0;
        weightCherriesHarvested = 0;
        weightApplesHarvested = 0;
        weightPearsHarvested = 0;

        do
        {
            if(idxCherryTrees < cherryTrees.size())
            {
                float weight = cherryTrees.at(idxCherryTrees).harvest(2000 - weightHarvested);
                weightCherriesHarvested += weight;
                weightHarvested += weight;

                if(cherryTrees.at(idxCherryTrees).getWeightAvailable() <= 0)
                {
                    idxCherryTrees++;
                }

            }else if (idxAppleTrees < appleTrees.size())
            {
                float weight = appleTrees.at(idxAppleTrees).harvest(2000 - weightHarvested);
                weightApplesHarvested += weight;
                weightHarvested += weight;

                if (appleTrees.at(idxAppleTrees).getWeightAvailable() <= 0)
                {
                    idxAppleTrees++;
                }

            }
            else if (idxPearTrees < pearTrees.size())
            {
                float weight = pearTrees.at(idxPearTrees).harvest(2000 - weightHarvested);
                weightPearsHarvested += weight;
                weightHarvested += weight;

                if (pearTrees.at(idxPearTrees).getWeightAvailable() <= 0)
                {
                    idxPearTrees++;
                }

            }else
            {
                break;
            }
            
        }
        while (weightHarvested < 2000);

        // Affichage Récolte
        std::cout << "Recolte #" << nbRecoltes << std::endl;
        std::cout << "Weight in cherries \t\t\t" << weightCherriesHarvested << " kg" << std::endl;
        std::cout << "Weight in apples \t\t\t" << weightApplesHarvested << " kg" << std::endl;
        std::cout << "Weight in pears \t\t\t" << weightPearsHarvested << " kg" << std::endl;
        std::cout << "Total Weight \t\t\t\t" << weightHarvested << " kg" << std::endl;
        std::cout << "---\t" << "---\t" << "---\t" << "---\t" << "---\t" << "---\t" << std::endl;

        if(weightHarvested < 2000)
        {
            contractEnded = true;
            std::cout << "contract ended :(" << std::endl;
        }

        nbRecoltes++;

    }
    while (nbRecoltes <= 10 && contractEnded==false);

}
