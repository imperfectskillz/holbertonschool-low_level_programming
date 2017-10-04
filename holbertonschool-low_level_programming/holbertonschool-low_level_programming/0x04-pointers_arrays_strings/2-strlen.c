#include "holberton.h"

/**
 *_strlen - returns length
 *
 *@s: char
 *Return: nothing
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
