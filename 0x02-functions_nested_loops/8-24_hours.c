#include "holberton.h"

/**
 * jack_bauer - prints every minute in 24 hours
 *
 *Return: no need
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar (i / 10);
			_putchar (i % 10);
			_putchar (';');
			_putchar (j / 10);
			_putchar (j % 10);
		}
	}
}
