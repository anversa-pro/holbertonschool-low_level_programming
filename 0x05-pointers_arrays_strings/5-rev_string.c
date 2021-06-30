#include "holberton.h"

/**
 * rev_string - Function that reverses a string
 * @s: input string to print
 * Return: empty
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i] != '\0')
		i++;
	while (i > j)
	{
		i--;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
	}
}
