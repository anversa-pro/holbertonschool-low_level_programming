#include "lists.h"
/**
 * get_dnodeint_at_index - Function that inserts a
 * new node at a given position.
 * @head: Double pointer to the first dlistint_t element
 * @index: Position in which the new node is to be added
 * Return: Addres of the new node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (!head)
	{
		return (NULL);
	}
	while (current)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count = count + 1;
	}
	return (NULL);
}
