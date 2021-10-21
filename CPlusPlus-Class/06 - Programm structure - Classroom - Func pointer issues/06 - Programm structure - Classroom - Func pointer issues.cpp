// 06 - Programm structure - Classroom - Func pointer issues.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

class Function
{
	void (*func) ();

public:
	auto getFuncPointer()
	{
		return func;
	}
	void setFuncPointer(void (*func_) ())
	{
		func = func_;
	}

};

void callFunc()
{
	std::cout << "call !!!!!!!!!!!!!" << std::endl;
}

int main()
{
    std::cout << "Hello World!\n";

	void (*func2) ();

	Function f;
	func2 = f.getFuncPointer();
	f.setFuncPointer(func2);

	func2();

}
