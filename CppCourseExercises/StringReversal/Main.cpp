#include <iostream>
#include <string>

int main()
{
	std::cout << "Insert string for reversal:\n";
	std::string value;
	getline(std::cin, value);
	std::cout << "Reversed string is: ";

	for (int i = value.length() - 1; i >= 0; i--)
	{
		std::cout << value[i];
	}

	return 0;
}