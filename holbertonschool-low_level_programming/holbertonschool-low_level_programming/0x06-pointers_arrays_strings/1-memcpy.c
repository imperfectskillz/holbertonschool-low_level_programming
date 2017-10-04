#include "holberton.h"

/**
 *memcpy - copies src to dest
 * @dest: awa
 * @src: awef
 * @n: n
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++; n--;
	}
	return (dest);
}
