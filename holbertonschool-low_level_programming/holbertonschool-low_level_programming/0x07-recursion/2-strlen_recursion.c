#include "holberton.h"

/**
 *_strlen_recursion - returns length
 *@s: to be tested
 *REturn: length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_strlen_recursion(++i);
	}
	else
	{
		return;
	}
	return (i);
}
