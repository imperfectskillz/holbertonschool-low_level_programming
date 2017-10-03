#include "holberton.h"

/**
 *puts2- prints multiples of 2
 *@str: being tested
 *Return: nothing
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x = x + 2;
	}
	_putchar('\n');
}
