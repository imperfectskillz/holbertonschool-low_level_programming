#include "holberton.h"

/**
 *create_array - create an array of chars using specific char and size
 *@size: size
 *@c: character
 *
 *Return: pointer to new array
 */

char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	result = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		result[i] = c;
	}
	return (result);
}
