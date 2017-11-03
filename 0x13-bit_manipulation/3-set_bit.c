#include "holberton.h"

/**
 *set_bit - sets the value of a bit to 1 at given index
 *@n: given bit
 *@index: index at which bit is set
 *Return: 1 if works -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (n == NULL)
		return (-1);

	if (index > (sizeof(unsigned long int) * 8 - 1))
	    return (-1);

	*n = *n | mask;
	return (1);
}
