#include "holberton.h"
#include <stdio.h>

/**
 *Print_diagsums - aweofij
 *@a:aweofij
 *@size:aweofij
 *Return: awefoij
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum1 = 0;
	int sum2 = 0;

        for (x = 0; x < size * size; )
	{
		sum1 += a[x];
		i = i + size + 1;
	}
	for (x = 0; x < size * size - (size); )
	{
		x = x + size - 1;
		sum2 += a[x];
	}
	printf("%d, %d\n", sum1, sum2);
}
