#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: Input parameter
 * Return: 1 if true 0 false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
