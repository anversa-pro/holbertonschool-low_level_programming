#include "holberton.h"
/**
* *alloc_grid - returns a pointer to a 2 dimensional array of integers.
* *@width: array width
* *@height:  array height
* Return: null in failure or empty string
*/
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
