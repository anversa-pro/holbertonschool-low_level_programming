#include "holberton.h"

/**
 * puts_half - Prints the second half of a string
 * @str: input string to print
 * Return: empty
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	j = (i - 1) / 2;
	while (j < i)
	{
		j++;
		_putchar(str[j]);
	}
	_putchar('\n');
}
