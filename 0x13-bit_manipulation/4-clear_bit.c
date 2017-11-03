#include "holberton.h"

/**
 *clear_bit - sets value to 0 at given index
 *@n: number
 *@index: index at which the bit should be set to 0
 *Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (n == NULL)
		return (-1);

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n = *n & ~mask;
	return (1);
}
