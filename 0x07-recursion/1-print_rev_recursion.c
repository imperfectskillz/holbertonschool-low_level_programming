#include "holberton.h"

/**
 *_print_rev_recursion - prints strings in reverse
 *@s: string
 *Return: prints string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
