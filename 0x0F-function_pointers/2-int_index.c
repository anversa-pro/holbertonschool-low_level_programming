#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Searches for an integer in the array
 * *@array: pointer to an array to search in
 * @size: the number of elements in the array
 * *@cmp: Pointer to the function to be used to compare values
 * Return: Integer index otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
