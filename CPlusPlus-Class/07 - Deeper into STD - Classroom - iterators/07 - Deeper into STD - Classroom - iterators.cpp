// 07 - Deeper into STD - Classroom - iterators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class objFunc {

public:
    int age;

    void operator() (int n_)
    {
        return n_ < 5;
    };

};

int main()
{
    std::vector<int> v = { 12,33, 55, 67 };
    std::vector<int>::iterator it = v.begin();
    
    std::advance(it, 6);
    it += 3;
    std::cout << *it;

    while (it != v.end()) {
        std::cout << *it << std::endl;
        it++;
    }

}
