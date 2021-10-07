
#include <iostream>
#include <vector>

#include "CandyBag.h"


int main()
{
    std::cout << "Hello World!\n";

    /*
    CandyBag myBag(CandyBag::CandyType::Tagada, 50);
    */
    std::vector<CandyBag> storage;

    storage.emplace_back(CandyBag(CandyBag::CandyType::Tagada, 200));
    storage.emplace_back(CandyBag(CandyBag::CandyType::HariboBanane, 100));
    storage.emplace_back(CandyBag(CandyBag::CandyType::LollyPop, 50));

    // -----------------------------------------------------------------------------
    std::cout << "Do you want to buy some candies ?" << std::endl;
    for(auto candyBag : storage)
    {
        std::cout << candyBag.getEnumName(candyBag.getType()) << " (" << candyBag.getQuantity() << ")" << std::endl;
    }

    char choice;
    CandyBag::CandyType typeChoice;
    std::cin >> choice;
    switch (choice)
    {
    case 't':
        typeChoice = CandyBag::CandyType::Tagada;
        break;
    case 'l':
        typeChoice = CandyBag::CandyType::LollyPop;
        break;
    case 'c':
        typeChoice = CandyBag::CandyType::ChewingGum;
        break;
    case 'r':
        typeChoice = CandyBag::CandyType::Reglisse;
        break;
    case 'h':
        typeChoice = CandyBag::CandyType::HariboBanane;
        break;
    default:
        break;
    }

    for (auto candyBag : storage)
    {
        if(candyBag.getType() == typeChoice)
        {
            std::cout << "How many candies ?" << std::endl;

            int quantityToBuy;
            std::cin >> quantityToBuy;

            candyBag.buyCandies(quantityToBuy);

        }
    }

}
