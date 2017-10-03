#include "holberton.h"

/**
 *_memset - returns nth
 *@s: starting point
 *@b: byte
 *@n: nth of bytes
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
