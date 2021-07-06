#include "holberton.h"

/**
 * *infinite_add - adds two numbers
 * *@n1: input number 1
 * *@n2: input number 2
 * *@r: buffer to store de addition
 * @size_r: buffer size
 * Return: 0 If the result can not be stored or pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;
	size_r--;
	if (i > size_r || j > size_r)
		return (0);
	for (; size_r >= 0; size_r--)
	{
		if (i >= 0 && j >= 0)
		{
			if (j <= 0 && i >= 0)
				k = k + (n1[i] - '0');
			else if (i <= 0 && j >= 0)
				k = k + (n2[j] - '0');
			else
				k = k + n1[i] + n2[j];
			if (size_r == 0 && k > 10)
				return (0);
			if (k < 10)
				r[size_r] = k;
			else
			{
				r[size_r] = k % 10;
				k = k / 10;
			}
			i--;
			j--;
		}
		else
			break;
	}
	return (r);
}
