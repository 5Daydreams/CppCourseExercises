#include <iostream>
#include "CelsiusToFarenheit.h"

int main()
{
	std::cout << "Insert number for temperature conversion from Celsius to Farenheit:\n";
	float temp;
	scanf_s("%f", &temp); // Given an existing variable, send it's address for data allocation

	CelsiusToFarenheit::Convert(&temp);

	std::cout << "Converted value is: " << temp << std::endl;

	return 0;
}