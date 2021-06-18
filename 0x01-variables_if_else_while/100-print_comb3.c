#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit10 = '0';
	int digit1;
	int number;

	while (digit10 <= '9')
	{
		digit1 = digit10 + '1';
		while (digit1 <= '9')
		{
			number = (digit10 * 10) + digit1;
			putchar (number);
			digit1++;
		}
		digit10++;
	}
	putchar ('\n');
	return (0);
}
