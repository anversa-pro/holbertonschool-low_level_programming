#include "main.h"

/**
 * _puts - function that prints a string followed by a new line to stdout
 * @str: input string to print
 * Return: empty
 */

void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
