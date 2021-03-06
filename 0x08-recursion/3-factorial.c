#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to calculate
 * Return: factorial calculation or -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
