
#include <iostream>


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
std::string replaceATag(std::string message_, std::string eye_, std::string needle_) {

	int foundPosition = -1;

	// Check if the strings are filled enough to replace something
	if (!needle_.empty() && !eye_.empty())
	{
		// Loop until the tag is not found anymore (not found is when find returns -1)
		do {
			foundPosition = message_.find(eye_, foundPosition + 1);

			if (foundPosition != -1) {
				std::cout << "Found " << eye_ << " in " << message_ << " pos:" << foundPosition << std::endl;
				message_.replace(foundPosition, eye_.length(), needle_);
			}

		} while (foundPosition != -1);
	}

	return message_;


};

int main()
{
	// Original message -----------------------------------------------------------------------------------------
	std::string input = "Hi, [Title] [Name] ! How do you [Title] do ?";
	std::cout << input << std::endl << std::endl;

	// message with the tags replaced ---------------------------------------------------------------------------
	std::string output;
	// First replacement is based on input
	output = replaceATag(input, "[Title]", "Mr");
	std::cout << output << std::endl << std::endl;

	// Second replacement is based on the output variable
	output = replaceATag(output, "[Name]", "Albert");
	std::cout << output << std::endl << std::endl;

}
