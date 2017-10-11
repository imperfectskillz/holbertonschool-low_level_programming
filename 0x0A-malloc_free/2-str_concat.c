#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int length1;
	int length2;
	int i;
	char *result;
	char end = '\0';

	if (s1 == NULL)
		s1 = (());
	if (s2 == NULL)
		s2 = (());
	length1 = _strlen(s1);
	length2 = length1 + _strlen(s2) + 1;
	result = malloc(sizeof(char) * length2);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < length2; i++)
	{
		if (i < length1)
		{
			result[i] = length1[i];
		}
		else
		{
			result[i] = s2[i - length1];
		}
	}
	result[i] = '\0';
	return (result);
}

/**
 * _strlen - return length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}
