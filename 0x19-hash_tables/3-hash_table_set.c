#include "hash.h"

/**
 *hash_table_set - sets node
 *@ht: hash table
 *@key: key
 *@value: insert value
 *Return: 0
 */

int hash_table_set *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	
