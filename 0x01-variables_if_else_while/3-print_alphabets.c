#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letterlo = 'a';
	int letterup = 'A';

	while (letterlo <= 'z')
	{
		putchar (letterlo);
		letterlo++;
	}
	while (letterup <= 'Z')
	{
		putchar (letterup);
		letterup++;
	}
	putchar ('\n');
	return (0);
}
