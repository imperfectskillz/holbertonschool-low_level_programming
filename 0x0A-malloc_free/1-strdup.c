#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to newly allocated space
 *@str: given string
 *Return: 0 or 1
 */

char *_strdup(char *str)
{
	char *result;
	int i;
	int length;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	result = (char *)malloc(sizeof(char) * size + 1);

	if (result == NULL)
		return (NULL);
	while (i < length)
		result[i] = str[i], i++;
	return (result);
}

/**
 * _strlen - returns length
 *@s: string
 *
 *Return: length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
