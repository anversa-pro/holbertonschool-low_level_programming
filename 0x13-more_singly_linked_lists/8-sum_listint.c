#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list.
 * *@head: pointer to the linked list
 * Return: Sum result or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	unsigned int listSum = 0;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		listSum += head->n;
		head = head->next;
	}
	listSum += head->n;
	return (listSum);
}
