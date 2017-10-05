#include "holberton.h"

/**
 *_isalpha - true or false
 *@c: tested
 *Return: true
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
