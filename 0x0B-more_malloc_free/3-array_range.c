#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - creates array of ints
 *@min: starting int
 *@max: ending int
 *Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *result;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	result = malloc(sizeof(*result) * size);

	if (result == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		result[i] = min + i;
	return (result);
}
