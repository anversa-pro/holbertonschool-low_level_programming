#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit10 = '0';
	int digit1;

	while (digit10 <= '9')
	{
		digit1 = digit10 + '1';
		while (digit1 <= '9')
		{
			putchar (digit10);
			putchar (digit1);
			if (digit10 != '8')
			{
				putchar (',');
				putchar (' ');
			}
			digit1++;
		}
		digit10++;
	}
	putchar ('\n');
	return (0);
}
