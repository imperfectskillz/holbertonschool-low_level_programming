#include "holberton.h"

/**
 *print_binary - prints binary of number
 *@n: number
 *Return: binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned long int temp = n;

	while (temp > 1)
	{
		temp = temp >> 1;
		mask = mask << 1;
	}

	while (mask)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}
}
