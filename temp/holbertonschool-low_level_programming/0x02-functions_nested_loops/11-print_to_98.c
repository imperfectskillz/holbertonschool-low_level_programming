#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - print to 98
 *@n: print til
 *Return: numbers
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%d\n", 98);
}
