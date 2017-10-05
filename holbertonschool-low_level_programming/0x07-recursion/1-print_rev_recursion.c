#include "holberton.h"

/**
 *_print_rev_recursion - prints strings in reverse
 *@s: string
 *Return: prints string
 */

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
	if (*s == '\0')
	{
		return;
	}
}
