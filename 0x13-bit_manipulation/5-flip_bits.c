#include "holberton.h"

/**
 *flip_bits - returns number of bits you'd need to flip
 *@n: number
 *@m: flipping number
 *Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		counter = counter + (result & 1);
		result = result >> 1;
	}
	return (counter);
}
