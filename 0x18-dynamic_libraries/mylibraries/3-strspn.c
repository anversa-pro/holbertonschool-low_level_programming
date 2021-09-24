#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * *@s: pointer to  an array
 * *@accept: segment to look for
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, c = 0;

	while (s[i] != '\0' && s[i] != ',')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				c++;
			j++;
		}
		i++;
	}
	return (c);
}
