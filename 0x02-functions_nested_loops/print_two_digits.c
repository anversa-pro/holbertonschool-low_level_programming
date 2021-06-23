#include "holberton.h"

/**
 * print_two_digits - Print a number of tow digits with _putchar
 * @n: intput parameter to print
 * Return: None.
 */

void print_two_digits(int n)
{
	if (n >= 0 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99 && n < 0)
	{
		n = n * -1;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
