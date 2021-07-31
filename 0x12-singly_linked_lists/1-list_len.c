#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * *@h: pointer to list
 * Return: Elements number in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t elementsNumber = 0;

	for (elementsNumber = 0; h; elementsNumber++)
	{
		h = h->next;
	}
	return (elementsNumber);
}
