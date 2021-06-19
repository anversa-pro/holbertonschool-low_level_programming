#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit100 = '0';
	int digit10 = '0';
	int digit1 = '0';

	while (digit100 <= '9')
	{
		digit10++;
		digit1++;
		while (digit10 <= '9')
		{
			digit1++;
			while (digit1 <= '9')
			{
				putchar (digit100);
				putchar (digit10);
				putchar (digit1);
				if (digit100 != '7')
				{
					putchar (',');
					putchar (' ');
				}
				digit1++;
			}
			digit10++;
			digit1 = digit10;
		}
		digit100++;
		digit10 = digit100;
		digit1 = digit10;
	}
	putchar ('\n');
	return (0);
}
