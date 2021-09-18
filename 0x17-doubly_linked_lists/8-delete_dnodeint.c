#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that delete a
 * new node at a given position.
 * @head: Double pointer to the first dlistint_t element
 * @index: Position in which the new node is to be added
 * Return: Addres of the new node.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *delete;
	unsigned int count = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0 && current->next != NULL)
	{
		delete = current;
		current->next->prev = NULL;
		*head = current->next;
		free(delete);
		return (1);
	}
	else if (index == 0)
	{
		free(*head);
		return (1);
	}
	while (current->next)
	{
		if (count == index)
		{
			delete = current;
			current->next->prev = current->prev;
			current->prev->next = current->next;
		}
		current = current->next;
		count = count + 1;
	}
	if (count == index)
	{
		current->prev->next = NULL;
		delete = current;
	}
	if (index > count)
		return (-1);
	free(delete);
	return (1);
}
