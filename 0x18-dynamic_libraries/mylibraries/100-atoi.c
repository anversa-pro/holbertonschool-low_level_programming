#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: input string to convert
 * Return: an integer value
 */

int _atoi(char *s)
{
	int i = 1, k = 0;
	unsigned int j = 0;

	while (s[k] != '\0')
	{
		if (s[k] == '-')
			i = i * -1;
		else if (s[k] >= '0' && s[k] <= '9')
		{
			j = (j * 10) + (s[k] - '0');
		}
		else if (j > 0)
			break;
		k++;
	}
	return (i * j);
}
