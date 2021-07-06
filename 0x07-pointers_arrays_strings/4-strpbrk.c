#include "holberton.h"

/**
 * *_strpbrk - Searches a string for anyof a set of bytes
 * *@s: pointer to a string
 * *@accept: bytes to search
 * Return: a pointer to the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
