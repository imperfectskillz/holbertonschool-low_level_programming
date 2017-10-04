#include "holberton.h"

/**
 **_strncat- cat string by n
 *@dest: va
 *@src: des
 *@n: dest
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
