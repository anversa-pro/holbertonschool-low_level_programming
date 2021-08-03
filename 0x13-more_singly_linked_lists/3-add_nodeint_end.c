#include "lists.h"

/**
 * *add_nodeint_end - Function that adds a new node at the end of a list.
 * **@head: double pointer to a linked list
 * @n: data to add at the list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;
	int i = 0;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;
	temp = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	for (i = 0; (temp->next) != NULL; i++)
	{
		temp  = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}
