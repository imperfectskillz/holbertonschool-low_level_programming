#include "holberton.h"

/**
 * sqrt_calc - calcs square root
 *@n: int
 *@i: int
 *Return: square of n
 */

int sqrt_calc(int n, int i)
{
	int x;

	x = i * i;
	if (n - x == 0)
		return (i);
	else if (n < x)
		return (-1);
	return (sqrt_calc(n, ++i));
}

/**
 * _sqrt_recursion - Returns natural root
 * @n: int
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (sqrt_calc(n, 2));
}
