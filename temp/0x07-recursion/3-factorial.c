#include "holberton.h"

/**
 *factorial- returns factorial of given number
 *@n: variable
 *REturn: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
