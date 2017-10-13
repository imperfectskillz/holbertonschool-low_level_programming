#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Return the length of a string
 * @s: string parameter
 * Return: length of string
 **/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * string_nconcat- concatetnates two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int length1;
	unsigned int length2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	if (length2 < n)
		n = length2;
	p = malloc(sizeof(*p) * (length1 + n + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		p[i + length1] = s2[i];
	p[i + length1] = '\0';
	return (p);
}
