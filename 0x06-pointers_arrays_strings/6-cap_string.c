#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string
 * *@a: input array to modify
 * Return: pointer
 */

char *cap_string(char *a)
{
	int i = 1, j = 0;
	char c[] = {' ', '\t', '\n', ',', ';', '.', '!',
		   '?', '"', '(', ')', '{', '}', '\0'};

	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] = a[0] - 32;
	while (a[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (a[i - 1] == c[j])
				a[i] = a[i] - 32;
			j++;
		}
		i++;
	}
	return (a);
}
