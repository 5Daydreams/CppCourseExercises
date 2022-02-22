#include "CelsiusToFarenheit.h"

void CelsiusToFarenheit::Convert(float* oldTemp)
{
	(*oldTemp) = (*oldTemp) * (9.0f / 5.0f) + 32.0f;
}