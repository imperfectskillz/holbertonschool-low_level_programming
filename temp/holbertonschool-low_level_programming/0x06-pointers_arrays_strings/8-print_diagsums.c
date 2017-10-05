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
	int x = 0;
	int y = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (x <= size * size)
	{
		sum1 += a[x];
		sum2 += a[y];
		x += size - 1;
		y += size + a;
	}
	printf("%d, %d\n", sum1, sum2);
}
