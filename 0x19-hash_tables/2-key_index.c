#include "hash_tables.h"

/**
 * key_index - returns key index
 *@key: pointer to key
 *@size: size of array
 *Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_kindex;

	key_index = (hash_dfb2(key) % size);
	return (key_index);
}
