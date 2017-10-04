#include "holberton.h"

/**
 *_islower- prints
 *@c: character to be checked
 *Return: 1 if lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
