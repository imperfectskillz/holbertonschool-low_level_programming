#include "hash_tables.h"

/**
 * hash_djb2 - djb2 hash
 *@str: pointer
 *Return: hash
 */

ed long int hash_djb2(const unsigned char *str)
{
	unsigned long hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
