// 01.02 - Formative - Poker.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <array>

enum class Value : int
{
    Two = 2,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace
};

enum class Suit : int
{
    Pique = 1,
    Coeur,
    Carreau,
    Trefle
};


std::string printAValue(Value value_) {

    switch (value_)
    {
    case Value::Two:
        return "Two";
        break;
    case Value::Three:
        return "Three";
        break;
    case Value::Four:
        return "Four";
        break;
    case Value::Five:
        return "Five";
        break;
    case Value::Six:
        return "Six";
        break;
    case Value::Seven:
        return "Seven";
        break;
    case Value::Eight:
        return "Eight";
        break;
    case Value::Nine:
        return "Nine";
        break;
    case Value::Ten:
        return "Ten";
        break;
    case Value::Jack:
        return "Jack";
        break;
    case Value::Queen:
        return "Queen";
        break;
    case Value::King:
        return "King";
        break;
    case Value::Ace:
        return "Ace";
        break;
    default:
        return "Default";
        break;
    }

}

std::string printASuit(Suit suit_) {

    switch (suit_)
    {
    case Suit::Pique:
        return "Spades";
        break;
    case Suit::Coeur:
        return "Hearts";
        break;
    case Suit::Carreau:
        return "Diamonds";
        break;
    case Suit::Trefle:
        return "Clubs";
        break;
    default:
        return "Default";
        break;
    }

}

std::string printACard(Card card_) {
    return printAValue(card_.value) + " of " + printASuit(card_.suit);
}

int main()
{
    std::array<Card, 52> deck{};
    int deckCount = 0;

    // Make the deck --------------------------------
    for (int s{ 1 }; s <= 4; s++) {

        for (int v{ 2 }; v <= 14; v++) {

            Card myCard;

            myCard.suit = static_cast<Suit>(s);
            myCard.value = static_cast<Value>(v);

            deck.at(deckCount) = myCard;
            deckCount++;

            //std::cout << printACard(myCard) << std::endl;

        }
    }

    // Check the deck 
    /*for (auto myCard : deck) {
        std::cout << printACard(myCard) << std::endl;
    }*/

    // Get the cards
    srand(time(NULL));
    std::array<int, 5> cardIndexes{};
    cardIndexes.fill(-1);

    for (int n{ 0 }; n < 5; n++) {
        int idxCardTemp = rand() % 52;

        bool trouve = false;
        for (auto iCard : cardIndexes) {
            if (iCard == idxCardTemp) {
                trouve = true;
                break;
            }
        }

        if (!trouve) {
            cardIndexes.at(n) = idxCardTemp;
            std::cout << printACard(deck.at(idxCardTemp)) << std::endl;
        }
    }

}
