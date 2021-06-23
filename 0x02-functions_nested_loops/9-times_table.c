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

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
