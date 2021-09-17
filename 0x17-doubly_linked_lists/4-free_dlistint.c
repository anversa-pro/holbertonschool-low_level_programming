#include "lists.h"
/**
 * free_dlistint - Function that frees a list.
 * **@head: pointer to head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
