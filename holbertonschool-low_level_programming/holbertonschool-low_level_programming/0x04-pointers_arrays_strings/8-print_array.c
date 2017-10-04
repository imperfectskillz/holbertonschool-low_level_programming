#include <stdio.h>

/**
 *print_array- prints array
 *@a: tested
 *@n: tested
 *Return: nothing
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
