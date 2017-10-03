#include "holberton.h"

/**
 *print_last_digit - prints last digit
 *@n: tests
 *Return: nothing
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
	{
		r = r * -1;
		_putchar(r + '0');
		return (r % 10);
	}
	else
	{
		_putchar(r + '0');
		return (r);
	}


}
