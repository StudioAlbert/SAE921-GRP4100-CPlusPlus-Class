
#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
	// Lambda nommée = Fonction
	auto squared_named = [](double x) {return x * x; };
	std::cout << squared_named(6.0f) << std::endl;

	// Liste de capture
	double captured = 5;
	auto squared_byCapture = [captured] {return captured * captured; };
	auto squared_byCaptureRef = [&captured] {return captured * captured; };


	std::cout << std::endl << "Capture List ------------------------------------" << std::endl;
	std::cout << "Captured variable = 5" << std::endl;
	std::cout << squared_byCapture() << std::endl;
	std::cout << squared_byCaptureRef() << std::endl;

	captured = 10;
	std::cout << "Captured variable = 20" << std::endl;
	std::cout << squared_byCapture() << std::endl;
	std::cout << squared_byCaptureRef() << std::endl;

	// Utilisation dans les algorithmes -----------------------------------------------
	std::vector<int> numbers = { 1,5,8,3,9,7,4,6 };

	// For each
	std::vector<std::string> const messages{ "Les chiens", "aboient", ", mais", "la caravane", "passe." };
	std::for_each(
		messages.begin(), 
		messages.end(), 
		[](std::string const& message)
		{
			std::cout << message << " ";
		}
	);

	// Find if (lambda as predicate)
	std::cout << std::endl << "Lambda as predicate ------------------------------------" << std::endl;
	std::cout << "Do you find ?" << std::endl;
	auto found = numbers.begin();
	do
	{
		found = std::find_if(found, numbers.end(), [&](const int n) {return n % 2 == 0; });
		std::cout << *found;
		found++;
	} while (found != numbers.end());
	std::cout << std::endl;

}
