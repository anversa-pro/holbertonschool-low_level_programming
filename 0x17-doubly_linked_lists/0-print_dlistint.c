#include "lists.h"
/**
 * print_list - Function that prints all the elements of a dlistint_t list.
 * *@h: pointer to list
 * Return: Nodes number
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodesNumber = 0;

	for (; h; nodesNumber++)
	{
		if (!h->n)
		{
			printf("%d\n", 0);
			h = h->next;
			nodesNumber++;
		}
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodesNumber);
}
