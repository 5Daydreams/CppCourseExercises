#include <iostream>
#include <string>

#include "NumberHelperMethods.h"

int main(void)
{
	std::string input;

	std::cout << "Run with floats (1) or ints (0)??";
	std::cin >> input;

	if ((char)input.at(0) - '0' == 1)
	{
		std::cout << "Insert first number: ";
		std::cin >> input;

		float value1 = NumberHelperMethods::ConvertFromString<float>(input);

		std::cout << "Insert second number: ";
		std::cin >> input;

		float value2 = NumberHelperMethods::ConvertFromString<float>(input);

		float selectedNumber = NumberHelperMethods::GetBigger(value1, value2);

		std::cout << "Of the two given numbers: " << value1 << " and " << value2 << std::endl;
		std::cout << selectedNumber << " is the biggest";
	}

	if ((char)input.at(0) - '0' == 0)
	{
		std::cout << "Insert first number: ";
		std::cin >> input;

		int value1 = NumberHelperMethods::ConvertFromString<int>(input);

		std::cout << "Insert second number: ";
		std::cin >> input;

		int value2 = NumberHelperMethods::ConvertFromString<int>(input);

		int selectedNumber = NumberHelperMethods::GetBigger(value1, value2);

		std::cout << "Of the two given numbers: " << value1 << " and " << value2 << std::endl;
		std::cout << selectedNumber << " is the biggest";
	}

	return 0;
}