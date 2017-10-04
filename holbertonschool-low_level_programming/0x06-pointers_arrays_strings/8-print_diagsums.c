#include "holberton.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_diagsums - aweofij
=======
 *Print_diagsums - aweofij
>>>>>>> fe0d50cc445ec394208de7d8173a9e9c99a989ab
 *@a:aweofij
 *@size:aweofij
 *Return: awefoij
 */

void print_diagsums(int *a, int size)
{
<<<<<<< HEAD
	int i, j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + (a[j * size + i]);
			}
		}
	}
	printf("%d, ", sum);
	sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) == size - 1)
			{
				sum = sum + (a[j * size + i]);
			}
		}
	}
	printf("%d\n", sum);
=======
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
>>>>>>> fe0d50cc445ec394208de7d8173a9e9c99a989ab
}
