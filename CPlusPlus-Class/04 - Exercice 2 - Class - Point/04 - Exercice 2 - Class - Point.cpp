
#include <iostream>

#include "Point.h"

int main()
{

	Point monPoint(0, 0);
	monPoint.saisir();
	std::cout << std::endl;

	// Distance entre 2 points --------------------------------------------------------------------
	Point ptDistance;
	std::cout << "Vous allez saisir un nouveau point pour en calculer la distance" << std::endl;
	ptDistance.saisir();

	std::cout << "La distance entre les points " << std::endl;
	monPoint.afficher();
	std::cout << "et le point " << std::endl;
	ptDistance.afficher();
	std::cout << "est " << monPoint.distanceTo(ptDistance) << std::endl;

	std::cout << std::endl;


	// Je déplace mon point -------------------------------------------------------------------------------------
	monPoint.deplacer(-4.0f, -3.0f);
	std::cout << "Vous avez déplacé le point à cette nouvelle position" << std::endl;
	monPoint.afficher();

	// Calcul du milieu d'un segment
	Point A, B, middle;
	A.saisir();
	B.saisir();
	middle = Point::middleOf(A, B);

	std::cout << "La centre du segment formé par " << std::endl;
	A.afficher();
	std::cout << "et le point " << std::endl;
	B.afficher();
	std::cout << "est " << std::endl;
	middle.afficher();


}