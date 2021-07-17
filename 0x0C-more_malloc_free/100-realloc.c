#include "holberton.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * *@ptr: pointer to the memory previously allocated
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: is the new size in bytes of the new memory block
 * Return: ptr if new == old, NULL specific cases
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	
}
