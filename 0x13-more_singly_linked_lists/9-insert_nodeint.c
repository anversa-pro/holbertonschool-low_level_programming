#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts a new node at a given position.
 * **@head: double pointer to the linked list
 * @idx: index of the list where the node should be added.
 * @n: content of the new node
 * Return: Address of the node or null if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode = NULL, *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	temp = *head;
	for (i = 0; i < (idx - 1) && temp->next; i++)
	{
		temp = temp->next;
	}
	if (i < (idx - 1))
		return (NULL);
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
