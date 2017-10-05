#include "holberton.h"

/**
 *_puts_recursion - recursion
 *@s: a
 *Return: aweofij
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);

}
