#include "holberton.h"

/**
 *rot13 - s
 *@s:aweofij
 *Return:wefoij
 */

char *rot13(char *s)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;
	int j;
	int exit = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == alphabet[j] && exit == 1)
			{
				s[i] = cipher[j];
				exit = 0;
			}
		}
		exit = 1;
	}
	return (s);
}
