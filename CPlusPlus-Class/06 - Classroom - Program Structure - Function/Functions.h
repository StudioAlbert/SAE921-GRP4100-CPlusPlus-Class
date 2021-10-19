#pragma once

// Multiple prototypes
int max (int a, int b)
{

	std::cout << "Float max ------------------- " << std::endl;

	if(a >= b)
	{
		return a;
	}else
	{
		return b;
	}
}

float max (float a, float b)
{
	
	std::cout << "Float int ------------------ " << std::endl;

	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

// Default values
void strOut (std::string str = "empty")
{
	std::cout << str << std::endl;
}

// Function pointer
int mult(int a, int b)
{
	return a * b;
}
int add(int a, int b)
{
	return a + b;
}

int (*ptrFunc)(int, int);

class Division
{
public:
	float operator() (float a, float b)
	{
		return a / b;
	}
};

class Functions
{
public:
	int (*myFunc)(int, int);
};

auto division_lambda = [](float val, float div) {
	return val / div;
};
