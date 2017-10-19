#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a
 *@array: given
 *@size: size of array
 *@action: function
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
