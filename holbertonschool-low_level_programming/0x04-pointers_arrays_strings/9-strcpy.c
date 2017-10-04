#include <stdio.h>
#include "holberton.h"

/**
 *_strcpy- copy string
 *@dest: one
 *@src: two
 *Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest = dest + '\0';
	return (dest);
}
