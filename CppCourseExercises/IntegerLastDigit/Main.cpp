#include <iostream>

int main()
{
	std::cout << "Insert number for checking last digit:\n";
	int value;
	scanf_s("%d", &value); // Given an existing variable, send it's address for data allocation

	int lastDigValue = value % 10;

	std::cout << "Last digit is: " << lastDigValue << std::endl;

	return 0;
}