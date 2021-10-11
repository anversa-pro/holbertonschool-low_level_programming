#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to a hash table to delete
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *temp;
unsigned long int index = 0;

for (index = 0; index < ht->size; index++)
{
	node = ht->array[index];
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
free(ht->array);
free(ht);
}
