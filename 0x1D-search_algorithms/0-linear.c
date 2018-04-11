#include "search.h"
#include <stdio.h>

/**
 *linear_search- linear search given array
 *@array: array ints
 *@size: size of array
 *@value: target value
 *Return: 1st index of matching value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	return (-1);
}
