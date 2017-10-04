#include "holberton.h"

/**
 *print_alphabet - prints alpha
 *
 *Return: 0 true
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
