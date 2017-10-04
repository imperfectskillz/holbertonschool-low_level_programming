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
}
