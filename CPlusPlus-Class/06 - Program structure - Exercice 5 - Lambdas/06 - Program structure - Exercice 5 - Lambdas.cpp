// 06 - Program structure - Exercice - Function pointer.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Point
{
public:
    Point(int x, int y) : x_(x), y_(y)
    {

    };

    float x_, y_;
};

void printPoint(Point &p)
{
    cout << p.x_ << ":" << p.y_;
}

int main()
{
    // Some numbers
    const std::vector<int> numbers = { 12,54,42,42,56,78 };

    void(*ptrPoint) (Point & p);
    ptrPoint = printPoint;

    // Use what you learned fromm previous exercice
	// Use another lambda to substract and display into a for_each algorithm
    // Fill brackets with some code
    int nbToSubstract = 5;
    std::for_each(
        numbers.begin(), 
        numbers.end(), 
        [nbToSubstract] (int n)
    {
            std::cout << n - nbToSubstract << ";";
    } 
    );
    std::cout << std::endl;

    std::vector<Point> points;
    points.emplace_back(Point(1, 1));
    points.emplace_back(Point(1, 1));
    points.emplace_back(Point(1, 1));
    points.emplace_back(Point(1, 1));
    points.emplace_back(Point(1, 1));
    points.emplace_back(Point(1, 1));
    points.emplace_back(Point(1, 1));
    points.emplace_back(Point(1, 1));

    for(auto p : points)
    {
        ptrPoint(p);
    }

    std::for_each(
        points.begin(),
        points.end(),
        
    );


}
