#include "holberton.h"

/**
 *print_two_digits - function to print a number with two digits
 *@d: input parameter
 *Return: None
 */

void print_two_digits(int d)
{
	int temp = d * -1;

	if (d > 99 && d < 1000)
	{
		_putchar(d / 100 + '0');
		_putchar((d / 10) % 10 + '0');
		_putchar(d % 10 + '0');
	}
	else if (d > 9 && d < 100)
	{
		_putchar(d / 10 + '0');
		_putchar(d % 10 + '0');
	}
	else if (d >= 0 && d <= 9)
	{
		_putchar(d + '0');
	}
	else if (d < 0 && d >= -9)
	{
		_putchar('-');
		_putchar(temp + '0');
	}
	else if (d < -9 && d > -100)
	{
		_putchar('-');
		_putchar(temp / 10 + '0');
		_putchar(temp % 10 + '0');
	}
	else if (d < -99 && d > -1000)
	{
		_putchar('-');
		_putchar(temp / 100 + '0');
		_putchar((temp / 10) % 10 + '0');
		_putchar(temp % 10 + '0');
	}
}

/**
 *print_comma_space - function that prints a comma followed by a space
 */
void print_comma_space(void)
{
	_putchar(',');
	_putchar(32);
}

/**
 * print_to_98 - function that prints natural numbers from n to 98
 * @n: input parameter
 */

void print_to_98(int n)
{
	int aux;

	if (n <= 98)
	{
		for (aux = n; aux <= 98; aux++)
		{
			print_two_digits(aux);
			if (aux != 98)
			{
				print_comma_space();
			}
			else
				_putchar('\n');
		}
	}
	else
	{
		for (aux = n; aux >= 98; aux--)
		{
			print_two_digits(aux);
			if (aux != 98)
			{
				print_comma_space();
			}
			else
				_putchar('\n');
		}
	}
}
