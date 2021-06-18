#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
		}
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
