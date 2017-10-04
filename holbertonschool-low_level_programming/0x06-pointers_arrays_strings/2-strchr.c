#include "holberton.h"

/**
 *_strchr - aewf
 *@s: aweofij
 *@c: aweofij
 *Return: awe
 */

char *_strchr(char *s, char c)
{
	char *p = s;
	char ch = c;

	for (; *p != ch; p++)
	{
		if (*p == '\0')
		{
			return (NULL);
		}
	}
	return (p);
}
