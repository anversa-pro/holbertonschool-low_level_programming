#include "lists.h"
/**
 * *add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * **@head: double pointer to head node
 * @n: data to add at the beginning of the list
 * Return: New Element Address or Null if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newElement;

	newElement = malloc(sizeof(dlistint_t));
	if (newElement == NULL)
	{
		return (NULL);
	}
	newElement->n = n;
	newElement->prev = NULL;
	if (*head)
	{
		(*head)->prev = newElement;
		newElement->next = (*head);
	}
	else
	{
		newElement->next = NULL;
	}
	*head = newElement;
	return (newElement);
}
