// 01.02 - Formative - Strings.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <array>
#include <string>
#include "01.02 - Formative - Strings.h"

std::array < std::string, 3> messages{};

#pragma region Personnas

// A character has a name, a title, is born on a plant, and commands a ship
struct Personna {
    std::string name;
    std::string title;
    std::string planet;
    std::string ship;
};

// Get All fields as values and put them into the struct
Personna initAPersonna(
    std::string name_,
    std::string title_,
    std::string planet_,
    std::string ship_) {

    Personna characterInitiated;
    characterInitiated.name = name_;
    characterInitiated.title = title_;
    characterInitiated.ship = ship_;
    characterInitiated.planet = planet_;

    return characterInitiated;
    
}

#pragma endregion

#pragma region Messages

// The whole bunch of messages
void initMessages() {
    messages.at(0) = "Hi [Title] [Name], welcome to the federation board.";
    messages.at(1) = "There is a very important mission on [Planet].";
    messages.at(2) = "[Title] [Name], go to [Ship] and combat !";
};

/*
* do the unique remplacement operation
* 
* Parameters :
* message_ : the string where the replacement will operate
* eye_ : the string to replace
* needle_ : the new string to put in place
* 
* return a new fresh message with the replacement done. If no replacement required, then the message is identical returned
* 
*/
std::string messageReplacement(std::string message_, std::string eye_, std::string needle_) {

    int foundPosition;

    do{
        foundPosition = message_.find(eye_, foundPosition + 1);
        if (foundPosition != -1) {
            //std::cout << "Found " << eye_ << " in " << message_ << " pos:" << foundPosition << std::endl;
            message_.replace(foundPosition, eye_.length(), needle_);
        }

    } while (foundPosition != -1);

    return message_;


};

// Take the message and will try to change each key word with the personna fields
std::string getReplacedMessage(std::string message_, Personna personna_) {

    message_ = messageReplacement(message_, "[Title]", personna_.title);
    message_ = messageReplacement(message_, "[Name]", personna_.name);
    message_ = messageReplacement(message_, "[Planet]", personna_.planet);
    message_ = messageReplacement(message_, "[Ship]", personna_.ship);
    return message_;

};
#pragma endregion



int main()
{

    /*
    Init the characters
    */
    Personna sarah = initAPersonna("Sarah Sheppard", "Commander", "Earth", "The explorer");
    Personna phil = initAPersonna("Phil Spector", "Pilot", "Mars", "3434-DFG");
    Personna theAlien = initAPersonna("Whifghy", "Child", "Sector SD/F67", "Sxiot");
    Personna chosenPersonna;
    char menuEntry;

    /*
    init the messages
    */
    initMessages();

    /*
    * Menu
    */
    std::cout << "Welcome to the Milky Way Federation !" << std::endl;
    std::cout << "Who do you want to be" << std::endl;
    std::cout << "Type (a) to be " << sarah.title << " " << sarah.name << std::endl;
    std::cout << "Type (b) to be " << phil.title << " " << phil.name << std::endl;
    std::cout << "Type (c) to be " << theAlien.title << " " << theAlien.name << std::endl;
    // Ask the personna
    std::cin >> menuEntry;

    switch (menuEntry)
    {
    case 'a':
        chosenPersonna = sarah;
        break;
    case 'b':
        chosenPersonna = phil;
        break;
    case 'c':
        chosenPersonna = theAlien;
        break;
    default:
        break;
    }
    
    // ----------------------------------------------------------------------------------
    // The mission !!!!!!!!!!!!!!!!!!!!!!
    for (auto theMessage : messages) {
        std::cout << getReplacedMessage(theMessage, chosenPersonna) << std::endl;
    }

}
