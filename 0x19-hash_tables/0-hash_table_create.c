#include "hash.h"

/**
 * hash_table_create - creates hash table
 *@size: size of array
 *Return: pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	int i = 0;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_s));
	if (new->array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
