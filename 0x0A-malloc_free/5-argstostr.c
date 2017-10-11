#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all arguments
 * @ac: arguments
 * @av: pointer to pointers
 *Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int counter;
	int length;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = ac + 1;
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	result = malloc(sizeof(char) * length);
	result[0] = '\0';
	if (result == NULL)
		return (NULL);

	counter = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++, counter++)
		{
			result[counter] = av[i][j];
		}
		result[counter] = '\n';
		counter++;
	}
	result[length - 1] = '\0';
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
