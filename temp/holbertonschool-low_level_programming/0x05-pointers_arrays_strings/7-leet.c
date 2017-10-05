#include "holberton.h"

/**
 *leet - s
 *@s: s
 *Return: awe
 */

char *leet(char *s)
{
	int i;
	int j;

	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};
	char change[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = change[j];
			}
		}
	}
	return (s);
}
