#include <iostream>
#include <string>

#include "EvenOrOdd.h"

int main()
{
	std::cout << "Insert number for checking divisibility by two:\n";
	int value;
	scanf_s("%d", &value); // Given an existing variable, send it's address for data allocation

	bool isOdd = EvenOrOdd::CheckOdd(value);

	std::string message = "";

	if (isOdd)
	{
		message += "an odd number.";
	}
	else
	{
		message += "an even number.";
	}

	std::cout << "Input value is " << message << std::endl;

	return 0;
}