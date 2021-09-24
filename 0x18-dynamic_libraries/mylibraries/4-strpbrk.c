#include "main.h"

/**
 * *_strpbrk - Searches a string for anyof a set of bytes
 * *@s: pointer to a string
 * *@accept: bytes to search
 * Return: a pointer to the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
