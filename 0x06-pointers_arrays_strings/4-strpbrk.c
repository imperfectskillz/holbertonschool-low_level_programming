#include "holberton.h"

/**
 *strpbrk - aweoij
 *@s: awef
 *@accept: aewofij
 *Return: awef
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for ( ; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
