#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: intput parameter
 *Return: n last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	_putchar(n);
	return (n);
}
