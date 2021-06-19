#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit10a;
	int digit1a;
	int digit10b = 0;
	int digit1b = 0;
	int number = 0;

	for (digit10a = 0; digit10a <= 8; digit10a++)
	{
		for (digit1a = 0; digit1a <= 9; digit1a++)
		{
			digit1b++;
			while (digit10b <= 9)
			{
				while (digit1b <= 9)
				{
					putchar (digit10a + '0');
					putchar (digit1a + '0');
					putchar (' ');
					putchar (digit10b + '0');
					putchar (digit1b + '0');
					number = (digit10a * 1000) + (digit1a * 100) + (digit10b * 10) + digit1b;
					if (number < 9899)
					{
						putchar (',');
						putchar (' ');
					}
					digit1b++;
				}
				digit10b++;
				digit1b = 0;
			}
			digit1b = digit1a + 1;
			digit10b = digit10a;
		}
		digit1b = digit1a + 1;
		digit10b = digit10a;
	}
	putchar ('\n');
	return (0);
}
