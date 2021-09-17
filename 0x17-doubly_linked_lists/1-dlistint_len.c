#include "lists.h"
/**
 * dlistint_len - Function that retunrs the elements of a dlistint_t list.
 * *@h: pointer to list
 * Return: Nodes number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodesNumber = 0;

	for (; h; nodesNumber++)
	{
		if (!h->n)
		{
			h = h->next;
			nodesNumber++;
		}
		h = h->next;
	}
	return (nodesNumber);
}
