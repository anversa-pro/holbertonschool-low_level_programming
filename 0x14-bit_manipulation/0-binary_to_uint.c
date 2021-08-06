#include "main.h"
/**
* binary_to_uint - Function that converts a binary number to an unsigned int.
* *@b: pointer to string of 0 and 1
* Return: Converted number or 0 if more chars not 0 or 1 or 1 if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0, sum = 0, base = 1;

	if (b != NULL)
	{
		for (; b[i];)
			i++;
		i--;
		for (; i >= 0; i--)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			sum += (b[i] - '0') * base;
			base *= 2;
		}
		return (sum);
	}
	return (1);
}
