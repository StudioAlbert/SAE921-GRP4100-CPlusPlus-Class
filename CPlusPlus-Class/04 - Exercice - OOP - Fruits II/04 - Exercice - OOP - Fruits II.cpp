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
            /*
            CherryTree ct;
            ct.initFruitQuantity();

            */
            trees.push_back(new CherryTree());

	    }else if(tirage % 3 == 1)
	    {
            // Add an apple tree
            /*
            AppleTree ct;
            ct.initFruitQuantity();

            */
            trees.push_back(new AppleTree());

	    }else if (tirage % 3 == 2)
	    {
            // Add an apple tree
            /*
            PearTree ct;
            ct.initFruitQuantity();

            */
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
    std::vector<FruitTree*> trees;
    static const int nbTrees = 140;

    float weightHarvested = 0;
    float weightCherriesHarvested = 0;
    float weightApplesHarvested = 0;
    float weightPearsHarvested = 0;

    int nbRecoltes = 1;
    bool contractEnded = false;

    unsigned int idxTree = 0;

    // init the trees ----------------------------------------------------
    std::cout << "Init trees ----------------" << std::endl;
    trees = initTrees(nbTrees);

    // Check the trees ----------------------------------------------------
    std::cout << "Check quantity ----------------" << std::endl;
    checkTrees(trees);
    
    // Recoltes --------------------------------------------------------------------
    do
    {

        weightHarvested = 0;
        weightCherriesHarvested = 0;
        weightApplesHarvested = 0;
        weightPearsHarvested = 0;

        do
        {
            FruitTree *theCurrentTree = trees.at(idxTree);

        	float weight = theCurrentTree->harvest(2000 - weightHarvested);
			weightHarvested += weight;

        	if (dynamic_cast<CherryTree*>(theCurrentTree) != nullptr)
            {
                weightCherriesHarvested += weight;
            }
            else if (dynamic_cast<AppleTree*>(theCurrentTree) != nullptr)
            {
                weightApplesHarvested += weight;
            }
            else if (dynamic_cast<PearTree*>(theCurrentTree) != nullptr)
            {
                weightPearsHarvested += weight;
            }
            else
            {
                break;
            }
            
            if (theCurrentTree->getWeightAvailable() <= 0)
            {
                idxTree++;
            }


        } while (weightHarvested < 2000 && idxTree < trees.size());

        // Affichage Récolte
        std::cout << "Recolte #" << nbRecoltes << std::endl;
        std::cout << "Weight in cherries \t\t\t" << weightCherriesHarvested << " kg" << std::endl;
        std::cout << "Weight in apples \t\t\t" << weightApplesHarvested << " kg" << std::endl;
        std::cout << "Weight in pears \t\t\t" << weightPearsHarvested << " kg" << std::endl;
        std::cout << "Total Weight \t\t\t\t" << weightHarvested << " kg" << std::endl;
        std::cout << "---\t" << "---\t" << "---\t" << "---\t" << "---\t" << "---\t" << std::endl;

        if (weightHarvested < 2000 || idxTree >= trees.size())
        {
            contractEnded = true;
            std::cout << "contract ended :(" << std::endl;
        }

        nbRecoltes++;

    } while (nbRecoltes <= 10 && contractEnded == false);

}
