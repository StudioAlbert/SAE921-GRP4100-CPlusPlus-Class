// 07 - Deeper dive into STD - Classroom - Algorithm.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>

#include "Copy.h"
#include "Display.h"
#include "Find.h"
#include "Person.h"



int main()
{
	vector<Person> persons = Person::initPersons();
	vector<int> numbers = { 12, 15, 46, 34, 23, 76, 89, 42 };

	// Copy some
	// numbers
	copyNumbers(numbers);
	// persons
	copyPersons(persons);

	displayOldPeople(persons, 60);

	// Find some
	// Numbers
	findNumbers(numbers);
	// Persons
	findPersons(persons);


}
