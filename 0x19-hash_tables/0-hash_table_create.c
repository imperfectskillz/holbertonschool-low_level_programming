#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 *@size: size of array
 *Return: pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *)* size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
