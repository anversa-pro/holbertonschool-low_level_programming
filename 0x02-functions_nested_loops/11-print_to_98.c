#include "holberton.h"

/**
 * print_to_98 - function that prints natural numbers from n to 98
 * @n: input parameter
 *Return: empty
 */
void print_to_98(int n)
{
	int aux;
	int temp;

	if (n <= 98)
	{
		for (aux = n; aux <= 98; aux++)
		{
			if (aux >= 0)
			{
				print_two_digits(aux);
			}
			else
			{
				temp = aux * -1;
				_putchar('-');
				print_two_digits(temp);
			}
			_putchar(',');
			_putchar(32);
		}
	}
	else
	{
		for (aux = n; aux >= 98; aux--)
		{
			if (aux > 99)
			{
				_putchar(aux / 100 + '0');
				_putchar((aux / 10) % 10 + '0');
				_putchar(aux % 10 + '0');
			}
			else
			{
				print_two_digits(aux);
			}
			_putchar(',');
			_putchar(32);
		}
	}
}
