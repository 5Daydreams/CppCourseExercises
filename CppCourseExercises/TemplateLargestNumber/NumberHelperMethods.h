#pragma once

#include <string>
#include <iostream>

class NumberHelperMethods
{
public:
	template<typename T>
	static T GetBigger(const T a, const T b)
	{
		if (a == b)
		{
			std::cout << std::endl << "Numbers were equal, returning first input." << std::endl;
			return a;
		}

		return a > b ? a : b;
	}

	template<typename T>
	static T ConvertFromString(const std::string stringNumber);
};