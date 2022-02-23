#include "NumberHelperMethods.h"

template<>
float NumberHelperMethods::ConvertFromString<float>(const std::string stringNumber)
{
	int intValue = 0;
	bool isNegative = false;

	if ((char)stringNumber.at(0) == '-')
	{
		isNegative = true;
	}

	float floatDivisor = 0;

	// filling in the input
	for (size_t i = 0; i < stringNumber.length(); i++)
	{
		if (isspace(stringNumber.at(i)))
		{
			std::cout << "Error: Space character found.";
			return 0;
		}

		if ((char)stringNumber.at(i) == '.')
		{
			floatDivisor = stringNumber.length() - i - 1;
			continue;
		}

		intValue = intValue * 10 + (1 - 2 * (int)isNegative) * ((int)stringNumber.at(i) - '0');
	}

	if (floatDivisor == 0)
	{
		return (float)intValue;
	}

	return (float)intValue / (pow(10, floatDivisor));

}


template<>
int NumberHelperMethods::ConvertFromString<int>(const std::string stringNumber)
{
	int intValue = 0;
	bool isNegative = false;

	if ((char)stringNumber.at(0) == '-')
	{
		isNegative = true;
	}

	// filling in the input
	for (size_t i = 0; i < stringNumber.length(); i++)
	{
		if (isspace(stringNumber.at(i)))
		{
			std::cout << "Error: Space character found.";
			return 0;
		}

		intValue = intValue * 10 + (1 - 2 * (int)isNegative) * ((int)stringNumber.at(i) - '0');
	}

	return intValue;
}