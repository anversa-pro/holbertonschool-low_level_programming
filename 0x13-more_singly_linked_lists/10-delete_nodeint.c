#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * **@head: double pointer to a linked list
 * @index: index of the node that should be deleted
 * Return: 1 if succeed otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *deletedNode = NULL, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	deletedNode = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(deletedNode);
		return(1);
	}
	for (; i < (index -1); i++)
	{
		deletedNode = deletedNode->next;
		if (deletedNode == NULL)
			return (-1);
	}
	temp = deletedNode->next;
	deletedNode->next = temp->next;
	free (temp);
	return (1);
}
