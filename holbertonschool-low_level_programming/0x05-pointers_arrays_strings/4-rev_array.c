#include "holberton.h"

/**
 *reverse_array - hi
 *@a: hi
 *@n: hi
 *Return: hi
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int x = 0;

	while (i < n)
	{
		x = a[i];
		a[i] = a[n - 1];
		a[n - 1] = x;
		i++;
		n--;
	}
}
