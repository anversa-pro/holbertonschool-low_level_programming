#include "lists.h"
/**
 * *add_node_end - Function that adds a new node at the end of a list_t list.
 * **@head: double pointer to head node
 * *@str: pointer to data to add at the beginning of the list
 * Return: New Element Address or Null if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0, newElementlen = 0;
	list_t *newElement, *temp;

	if (str == NULL)
		return (NULL);
	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
		return (NULL);

	newElementlen = strlen(str);
	newElement->str = malloc(sizeof(char) * (newElementlen + 1));
	if (newElement->str == NULL)
	{
		free(newElement);
		return (NULL);
	}
	newElement->next = NULL;
	for (i = 0; str[i]; i++)
	{
		newElement->str[i] = str[i];
	}
	newElement->len = newElementlen;

	if (*head == NULL)
	{
		*head = newElement;
		return (*head);
	}
	temp = *head;
	for (i = 0; (temp->next) != NULL; i++)
	{
		temp = temp->next;
	}
	temp->next = newElement;
	return (newElement);
}
