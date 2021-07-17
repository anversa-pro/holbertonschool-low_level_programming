#include "holberton.h"
/**
 * *array_range - creates an array of integers
 * @min: lesser number on the array
 * @max: greater number on  the array
 * Return: Pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0, j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	j = min;
	for (i = 0; i <= (max - min); i++, j++)
		ptr[i] = j;
	return (ptr);
}
