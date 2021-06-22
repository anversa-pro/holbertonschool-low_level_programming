#include "holberton.h"

/**
 * main - Define which is the purpouse
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char word[] = "Holberton";

	while (i < 9)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
