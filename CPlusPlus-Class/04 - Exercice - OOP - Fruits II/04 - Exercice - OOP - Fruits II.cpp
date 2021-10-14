// 04 - Exercice - OOP - Fruits.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "AppleTree.h"
#include "CherryTree.h"
#include "PearTree.h"


std::vector<FruitTree*> initTrees(int nbTrees)
{

    std::vector<FruitTree*> trees;

    // Add n tree, and distribute the different trees equally
    for (int i = 0; i < nbTrees; ++i)
    {
        srand(time(NULL) * i);
    	int tirage = rand();

        if(tirage % 3 == 0)
	    {
            // Add a cherry tree
            trees.push_back(new CherryTree());

	    }else if(tirage % 3 == 1)
	    {
            // Add an apple tree
            trees.push_back(new AppleTree());

	    }else if (tirage % 3 == 2)
	    {
            // Add an apple tree
            trees.push_back(new PearTree());

	    }else
        {
            std::cout << "This case should not happen. Please check the code.";
        }


        trees.back()->initFruitQuantity();

    }

    return trees;

}

void checkTrees(std::vector<FruitTree*> trees)
{
	float weightHarvested = 0;

	for (auto t : trees)
	{
        float weight = 0;
        std::string treeType;

		weight = t->getWeightAvailable();
		weightHarvested += weight;

        if (dynamic_cast<CherryTree*>(t) != nullptr)
        {
            treeType = "Cherry tree";
        }
        else if (dynamic_cast<AppleTree*>(t) != nullptr)
        {
            treeType = "Apple tree";
        }
        else if (dynamic_cast<PearTree*>(t) != nullptr)
        {
            treeType = "Pear tree";
        }
        else
        {
            //
        }
		std::cout << "Type d'arbre:" << treeType << " | Poids:" << weight << " kg" << std::endl;
	}
	std::cout << "Total : " << weightHarvested << " kg" << std::endl << std::endl;
    std::cout << "End of check ---  -- - ---  -- - ---  -- - ---  -- - ---  -- - ---  -- - ---  -- - ---  -- - " << std::endl << std::endl;
}

int main()
{
    // The whole collection of trees
	std::vector<FruitTree*> trees;

    // How much trees do we need ?
    static const int nbTrees = 140;

    // init the trees ----------------------------------------------------
    std::cout << "Init trees ----------------" << std::endl;
    trees = initTrees(nbTrees);

    // Check the trees ----------------------------------------------------
    std::cout << "Check quantity ----------------" << std::endl;
    checkTrees(trees);
    
    // Recoltes --------------------------------------------------------------------
    // Number of harvesting
    int nbHarvesting = 1;
    // Flag to out the harvesting if the garden is not plenty enough
    bool contractEnded = false;
    // The index of the current tree to harvest
    unsigned int idxTree = 0;

    do
    {

        float totalWeightHarvested = 0;
        float weightCherriesHarvested = 0;
        float weightApplesHarvested = 0;
        float weightPearsHarvested = 0;

        do
        {
            FruitTree *theCurrentTree = trees.at(idxTree);

        	float oneTreeWeight = theCurrentTree->harvest(2000 - totalWeightHarvested);
			totalWeightHarvested += oneTreeWeight;

        	if (dynamic_cast<CherryTree*>(theCurrentTree) != nullptr)
            {
                weightCherriesHarvested += oneTreeWeight;
            }
            else if (dynamic_cast<AppleTree*>(theCurrentTree) != nullptr)
            {
                weightApplesHarvested += oneTreeWeight;
            }
            else if (dynamic_cast<PearTree*>(theCurrentTree) != nullptr)
            {
                weightPearsHarvested += oneTreeWeight;
            }
            else
            {
                break;
            }
            
            if (theCurrentTree->getWeightAvailable() <= 0)
            {
                idxTree++;
            }


        } while (totalWeightHarvested < 2000 && idxTree < trees.size());

        // Affichage Récolte
        std::cout << "Recolte #" << nbHarvesting << std::endl;
        std::cout << "Weight in cherries \t\t\t" << weightCherriesHarvested << " kg" << std::endl;
        std::cout << "Weight in apples \t\t\t" << weightApplesHarvested << " kg" << std::endl;
        std::cout << "Weight in pears \t\t\t" << weightPearsHarvested << " kg" << std::endl;
        std::cout << "Total Weight \t\t\t\t" << totalWeightHarvested << " kg" << std::endl;
        std::cout << "---\t" << "---\t" << "---\t" << "---\t" << "---\t" << "---\t" << std::endl;

        if (totalWeightHarvested < 2000 || idxTree >= trees.size())
        {
            contractEnded = true;
            std::cout << "contract ended :(" << std::endl;
        }

        nbHarvesting++;

    } while (nbHarvesting <= 10 && contractEnded == false);

}
