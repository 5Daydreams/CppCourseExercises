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
	std::cout << input << std::endl;

	int numberListIndex = 0;
	numberList.push_back(0);

	std::cout << "Registered collection values: " << std::endl;

	for (size_t i = 0; i < input.length(); i++)
	{
		if (isspace(input.at(i)))
		{
			//if (i == input.length() - 1)
			//{
			//	break;
			//}
			//else
			//{
			//	if (isspace(input.at(i+1)))
			//	{
			//		break;
			//	}
			//}
			numberListIndex++;
			numberList.push_back(0);
			continue;
		}

		numberList.at(numberListIndex) = numberList.at(numberListIndex) * 10 + ((int)input.at(i) - '0');
	}

	for (size_t i = 0; i < numberList.size(); i++)
	{
		std::cout << numberList.at(i) << " ";
	}

	return 0;
}