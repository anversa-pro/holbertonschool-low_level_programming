#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: input numbert to print
 * Return: empty
 */

void print_number(int n)
{
	int nn = 0, digits = 1, rev = 0, min = 0;

	if (n < 0)
	{
		nn = 1;
		n = n * -1;
		if (n == -2147483648)
		{
			n = (n % 1000000000) * -1;
			min = 2;
		}
	}
	while (n / 10 != 0)
	{
		rev = rev + (n % 10);
		if (digits < 9)
			rev = rev * 10;
		n = n / 10;
		digits++;
	}
	if (digits < 10)
		rev = rev + n;
	if (nn == 1)
		_putchar('-');
	if (min == 2)
		_putchar(min + '0');
	for (; digits > 0; digits--)
	{
		if (digits == 10)
		{
			_putchar(n + '0');
			digits--;
		}
		_putchar(rev % 10 + '0');
		rev = rev / 10;
	}
}
