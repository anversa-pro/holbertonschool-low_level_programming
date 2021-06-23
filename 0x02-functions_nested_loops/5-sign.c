#include "holberton.h"

/**
 * print_sign - Initial fuction that prints the sign of a number
 * @n: input parameter to evaluate
 * Return: 1 if +, 0 if zero, -1 if -
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('+');
	return (1);
}
