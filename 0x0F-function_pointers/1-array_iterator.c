#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given on each element of an array
 * *@array: pointer to an array to search in
 * *@size: is the size of the array
 * *@action:  Pointer to the function to use
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
