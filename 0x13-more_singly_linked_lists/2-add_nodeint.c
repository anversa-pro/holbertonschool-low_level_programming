#include "lists.h"

/**
 * *add_nodeint - Function that adds a new node at the beginning of a list.
 * **@head: double pointer to a linked list
 * @n: data of the list.
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
