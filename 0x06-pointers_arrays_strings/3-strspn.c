#include "holberton.h"

/**
 *_strspn - char
 *@s: awef
 *@accept: aweoij
 *Return: aweofij
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (accept[x] == '\0')
		{
			break;
		}
	}
	return (x);
}
