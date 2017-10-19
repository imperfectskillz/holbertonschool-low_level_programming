#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - executes a function given as a
 * parameter on each element of an array
 *@array: given
 *@size: size of array
 *@action: function
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
