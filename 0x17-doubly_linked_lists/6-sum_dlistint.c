#include "lists.h"
/**
 * sum_dlistint - Function that sums all nodes.
 * @head: Double pointer to the first dlistint_t element
 * Return: Addres of the new node.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (!head)
	{
		return (count);
	}
	while (current->next != NULL)
	{
		count += current->n;
		current = current->next;
	}
	count += current->n;
	return (count);
}
