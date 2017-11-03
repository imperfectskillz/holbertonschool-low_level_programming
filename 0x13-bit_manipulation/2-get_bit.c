#include "holberton.h"
#include <stdio.h>

/**
 *get_bit - returns the value of a big at given index
 *@n: given number
 *@index: index at which to return bit
 *Return: value at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask = mask << index; /*hidden 0's in front of 1 in the size of ul*/
	if ((mask & n) == 0)
		return (0);
	else
		return (1);
}
