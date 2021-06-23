#include "holberton.h"

/**
 * print_alphabet_x10 - Prints ten times the alphabet.
 *
 *Return: No need
 */

void print_alphabet_x10(void)
{
	char i;
	int count;

	for (count = 0; count < 10; count++)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
