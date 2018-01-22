#include "hash_tables.h"

/**
 *hash_table_set - sets node
 *@ht: hash table
 *@key: key
 *@value: insert value
 *Return: 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new->value = strdup(value);
	new->key = strdup(key);

	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
