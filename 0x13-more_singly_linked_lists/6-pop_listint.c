#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list, and returns the head node’s data.
 * **@head: Double pointer to a linked list
 * Return: new head nodes data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempnode;
	int deletedData = 0;

	if(*head == NULL)
		return (0);
	tempnode = *head;
	deletedData = tempnode->n;
	*head = (*head)->next;
	free(tempnode);
	return(deletedData);
}
