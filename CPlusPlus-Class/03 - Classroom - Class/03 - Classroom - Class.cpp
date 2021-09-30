// 03 - Classroom - Class.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include "Animal.h"

void createLion(){

    Animal Lion = Animal(5000);

};

int main()
{

    Animal germanSheppard = Animal(100);
    Animal spanielCocker = Animal(2);
    
    createLion();
    
   /*dog.print();
    */

    std::cout << "Hello world !!!!!" << std::endl;

}
