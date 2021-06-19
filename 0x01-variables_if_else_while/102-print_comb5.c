#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit10a = '0';
	int digit1a = '0';
	int digit10b = '0';
	int digit1b = '0';

	while (digit10a <= '9')
	{
		digit1a++;
		while (digit1a <= '9')
		{
			putchar (digit10a);
			putchar (digit1a);
			if (digit10a != '8')
			{
				putchar (' ');
			}
			digit1a++;
		}
		digit10a++;
		digit1a = digit10a;
	}
	putchar ('\n');
	return (0);
}
