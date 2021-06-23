#include "holberton.h"

/**
 * times_table - function that prints 9 times table
 *
 * Return: empty
 */
void times_table(void)
{
	int i;
	int j;
	int aux;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (j = 0; j <= 9; j++)
		{
			aux = i * j;
			if (aux > 9)
			{
				_putchar(aux / 10 + '0');
				_putchar(aux % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(32);
				}
				else
					_putchar('\n');
			}
			else if (aux <= 9)
			{
				_putchar(aux + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
				else
					_putchar('\n');
			}
		}
	}
}
