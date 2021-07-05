#include "holberton.h"

/**
 * *rot13 - encodes a string into rot13
 * *@a: input array to modify
 * Return: encode string
 */

char *rot13(char *a)
{
	int i = 0, j;
	char let[] = {"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"};
	char num[] = {"nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM"};

	while (a[i] != '\0')
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (a[i] == let[j])
				a[i] = num[j];
			j++;
		}
		i++;
	}
	return (a);
}
