#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * *@h: pointer to a linked list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodesNumber = 0;

	if (h == NULL)
		return (-1);
	for (nodesNumber = 0; h; nodesNumber++)
	{
		h = h->next;
	}
	return (nodesNumber);
}
