#include "holberton.h"

/**
 * _abs - function that computes the absolute value of an Integer
 * @n: input parameter
 *Return: absolute n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
