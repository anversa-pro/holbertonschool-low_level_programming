#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int duet1 = 0;
	int duet2 = 0;

	while (duet1 <= 98)
	{
		duet2 = duet1 + 01;
		while (duet2 <= 99)
		{
			putchar ((duet1 / 10) + '0');
			putchar ((duet1 % 10) + '0');
			putchar (' ');
			putchar ((duet2 / 10) + '0');
			putchar ((duet2 % 10) + '0');
			if (duet1 < 98)
			{
				putchar (',');
				putchar (' ');
			}
			duet2++;
		}
		duet1++;
	}
	putchar ('\n');
	return (0);
}
