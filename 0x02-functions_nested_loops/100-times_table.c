#include "holberton.h"

/**
 * print_table_numbers - prints comma, spaces and the number
 * @n: input parameter to print
 */

void print_table_numbers(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(32);
		_putchar(32);
		_putchar(32);
		_putchar(n + '0');

	}
	else if (n >= 9 && n < 100)
	{
		_putchar(',');
		_putchar(32);
		_putchar(32);
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 99 && n < 1000)
	{
		_putchar(',');
		_putchar(32);
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
/**
 * print_times_table - prints the n times table
 * @n: input parameter
 *
 */

void print_times_table(int n)
{
	int i;
	int j;
	int aux;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			j = 1;
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				aux = i * j;
				print_table_numbers(aux);
				if (j == n)
					_putchar('\n');
			}
		}
	}
}
