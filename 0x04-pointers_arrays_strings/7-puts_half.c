#include "holberton.h"

/**
 *puts_half- half
 *
 *@str: tested
 *Return: none
 */

void puts_half(char *str)
{
	int n = 0;
	int x = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 0)
	{
		x = n / 2;
		while (x < n)
		{
			_putchar(str[x]);
			x++;
		}
		_putchar('\n');
	}
	else
	{
		n = n + 1;
		x = n / 2;
		while (x < n - 1)
		{
			_putchar(str[x]);
			x++;
		}
		_putchar('\n');
	}
}
