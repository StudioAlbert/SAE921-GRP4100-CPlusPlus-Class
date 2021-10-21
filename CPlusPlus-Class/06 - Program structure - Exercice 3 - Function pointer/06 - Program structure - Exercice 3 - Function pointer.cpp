
#include <iostream>
#include <vector>

class NumberStorage
{
    // a collection of integers
	std::vector<int> numbers;
    // Pointer to the mysterious function
    void (*callback)(int);
    bool (*check)(int);

public:
    // This method add a number into the vector then call the mysterious function
    void add(int numbertoAdd)
    {
        if(check(numbertoAdd))
        {
            numbers.emplace_back(numbertoAdd);
            if (callback != nullptr)
            {
                callback(numbers.back());
            }
        }
    }

    // The function pointer is private, we need a method to connect
	void connectCallback(void(*functionToCall)(int))
    {
        callback = functionToCall;
    }
    void connectCheck(bool(*functionToCall)(int))
    {
        check = functionToCall;
    }

};

// Message to display into your function
const std::string message = "Int to display : ";

// The mysterious function
void callbackDisplay(int numberToDisplay)
{
    // Fill the function
    // Display a message and the value of the number
    std::cout << message << numberToDisplay << std::endl;
}

bool checkValue(int nbToCheck)
{
	if(nbToCheck % 2 != 0)
	{
		return true;
	}else
	{
		return false;
	}
}

int main()
{
    NumberStorage myNumberStorage;

    // Connect together callback(int) member
    myNumberStorage.connectCallback(callbackDisplay);
    myNumberStorage.connectCheck(checkValue);

    // Add some number, each addtion should call callbackDisplay
    myNumberStorage.add(4);
    myNumberStorage.add(12);
    myNumberStorage.add(4);
    myNumberStorage.add(5);

}
