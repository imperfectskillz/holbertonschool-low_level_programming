#include "holberton.h"

/**
 *prime - guesses number
 *@x: number
 *@y: number
 *Return: return final number
 */

int prime(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (y < 1)
	{
		return (0);
	}
	if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (prime(x, y - 1));
	}
}




/**
 *is_prime_number - determines prime
 *@n: number
 *Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (prime(n, n / 2));
}
