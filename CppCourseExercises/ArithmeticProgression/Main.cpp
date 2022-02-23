#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main(void)
{
	std::vector<int> numberList;
	std::string input;

	std::cout << "Input collection values: (please separate them by using spaces)" << std::endl;
	getline(std::cin, input);

	int numberListIndex = 0;
	numberList.push_back(0);
	bool isNegative = false;

	// filling in the list
	for (size_t i = 0; i < input.length(); i++)
	{
		if (isspace(input.at(i)))
		{
			isNegative = false;
			numberListIndex++;
			numberList.push_back(0);
			continue;
		}

		if ((char)input.at(i) == '-')
		{
			isNegative = true;
			continue;
		}

		numberList.at(numberListIndex) = numberList.at(numberListIndex) * 10 + (1 - 2 * (int)isNegative) * ((int)input.at(i) - '0');
	}

	if (numberList.size() < 3)
	{
		std::cout << "List was filled with too few inputs.";

		return 0;
	}

	std::cout << "Registered collection values: " << std::endl;

	std::cout << numberList.at(0) << " " << numberList.at(1) << " ";

	bool seriesIsArith = true;

	int startingIterationDifference = numberList[1] - numberList[0];;

	for (size_t i = 2; i < numberList.size(); i++)
	{
		int iterationDifference = numberList[i] - numberList[i - 1];

		if (startingIterationDifference - iterationDifference != 0)
		{
			seriesIsArith = false;
		}

		// compare the values between index i and index i-1

		std::cout << numberList.at(i) << " ";
	}

	std::string result;

	if (seriesIsArith)
	{
		result = "is";
	}
	else
	{
		result = "is not";
	}

	std::cout << std::endl << "Series " << result << " arithmetic";

	if (seriesIsArith)
	{
		std::cout << " with step " << startingIterationDifference;
	}

	return 0;
}