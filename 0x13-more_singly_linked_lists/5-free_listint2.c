#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list and sets the head to NULL
 * **@head: double pointer to a linked list
 * @n: data to add at the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *newhead;

	if (head == NULL)
		return;
	newhead = *head;
	while (newhead != NULL)
	{
		temp = newhead;
		newhead = newhead->next;
		free(temp);
	}
	*head = NULL;
}
