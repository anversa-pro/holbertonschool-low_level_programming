#include "lists.h"
/**
 * free_list - Function that frees a list_t list.
 * **@head: pointer to head node
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
