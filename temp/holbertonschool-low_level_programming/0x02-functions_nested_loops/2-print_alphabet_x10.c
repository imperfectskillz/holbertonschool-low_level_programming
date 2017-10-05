#include "holberton.h"

/**
 *print_alphabet_x10- print 10 times
 *
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int c;
	int d;

	for (c = 0; c < 10; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
