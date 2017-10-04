#include "holberton.h"

/**
 *print_line- prints lines
 *@n: tested
 *Return: true
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
