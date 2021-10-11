#include "hash_tables.h"
/**
 *  shash_table_create - function that creates a hash table
 *  @size: size of new hash table
 *  Return: pointer to a new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash_table;

	if (size == 0)
		return (NULL);

	new_hash_table = malloc(sizeof(shash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = calloc(size, sizeof(shash_node_t *));
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	return (new_hash_table);
}

/**
  * shash_table_set - gives the index of a key
  * @ht: pointer to a hash table
  * @key: key to access the position on the array
  * @value: value to set/modify in a node
  * Return: 1 in success setting otherwise 0
  */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - Function that retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: key to look for
 * Return: Value associated with the key otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Function that that prints a hash table.
 * @ht: Hash table to print
 * Return: None
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	unsigned long int index, boolean = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (boolean == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			boolean = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Function that that prints a hash table.
 * @ht: Hash table to print
 * Return: None
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	unsigned long int index, boolean = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (boolean == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			boolean = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}


/**
 * shash_table_delete - function that deletes a hash table
 * @ht: pointer to a hash table to delete
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *node, *temp;
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
