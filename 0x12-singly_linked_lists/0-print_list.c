#include "lists.h"
/**
 * print_list - Function that prints all the elements of a list_t list.
 * *@h: pointer to list
 * Return: Nodes number
 */

size_t print_list(const list_t *h)
{
	size_t nodesNumber = 0;

	for (nodesNumber = 0; h; nodesNumber++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			nodesNumber++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (nodesNumber);
}
