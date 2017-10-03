#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - rev
 *@s: tested
 *Return: something
 */

void rev_string(char *s)
{
	int x = 0;
	int temp = 0;
	int y = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x = x - 1;
	while (x > y)
	{
		temp = s[y];
		s[y] = s[x];
		s[x] = temp;
		x--;
		y++;
	}
}
