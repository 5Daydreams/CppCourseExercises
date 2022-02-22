#include <iostream>
#include "AbsoluteDifference.h"

int main()
{
	int a, b, result;

	std::cout << "Insert first number for absolute difference calculation:\n";
	scanf_s("%d", &a); // Given an existing variable, send it's address for data allocation
	std::cout << "Insert second number:\n";
	scanf_s("%d", &b); // Given an existing variable, send it's address for data allocation

	result = AbsoluteDifference::AbsDifference(a, b);

	std::cout << "Result: " << result << std::endl;

	return 0;
}