#include "AbsoluteDifference.h"

int AbsoluteDifference::CustomAbs(int value)
{
	if (value < 0)
	{
		value *= -1;
	}

	return value;
}

int AbsoluteDifference::AbsDifference(int a, int b)
{
	return CustomAbs(b - a);
}
