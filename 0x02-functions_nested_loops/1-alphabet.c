#include "holberton.h"

/**
 * main - Define which is the purpouse
 *
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
