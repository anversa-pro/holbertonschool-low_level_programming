#include "holberton.h"

/**
 * *string_toupper - changes lowercase letters to uppercase
 * *@a: input array to modify
 * Return: pointer
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		i++;
	}
	return a;
}
