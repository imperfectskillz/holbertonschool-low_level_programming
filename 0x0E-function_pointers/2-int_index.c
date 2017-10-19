#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - function that searches for int
 *@array: array to be searched
 *@size: size of array
 *@cmp: function
 *Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return(-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		else
			return (-1);
	}
}
