#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: input numbert to print
 * Return: empty
 */

void print_number(int n)
{
	int nn = 0, digits = 1, rev = 0;

	if (n < 0)
	{
		nn = 1;
		n = n * -1;
	}
	while (n / 10 != 0)
	{
		rev = (rev + (n % 10)) * 10;
		n = n / 10;
		digits++;
	}
	rev = rev + n;
	if (nn == 1)
		_putchar('-');
	for (; digits > 0; digits--)
	{
		_putchar(rev % 10 + '0');
		rev = rev / 10;
	}
}
