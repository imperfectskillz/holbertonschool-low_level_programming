#include "holberton.h"

/**
 *swap_int- swaps ints
 *@a: one variable
 *@b: second
 *
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
