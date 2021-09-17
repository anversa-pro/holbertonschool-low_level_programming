#include "lists.h"
/**
 * *add_dnodeint_end - Function that adds a new node at the end of list.
 * **@head: double pointer to head node
 * @n: data to add at the beginning of the list
 * Return: New Element Address or Null if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	unsigned int i = 0;
	dlistint_t *newElement, *temp;


	newElement = malloc(sizeof(dlistint_t));
	if (newElement == NULL)
		return (NULL);
	newElement->next = NULL;
	if (*head == NULL)
	{
		newElement->n = n;
		newElement->prev = NULL;
		*head = newElement;
		return (*head);
	}
	temp = *head;
	for (; (temp->next) != NULL; i++)
	{
		temp = temp->next;
	}
	newElement->n = n;
	newElement->prev = temp;
	temp->next = newElement;
	return (newElement);
}
