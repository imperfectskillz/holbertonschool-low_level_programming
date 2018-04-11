#include "search_algos.h"
#include <stdio.h>

/**
 *binary_search - binary search
 *@array: pointer to array
 *@size: size
 *@value: target value
 *Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t middle;
	size_t i;

        if (array == NULL)
                return (-1);

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
	}
	printf("\n");

	middle = size / 2;

	if (value == array[middle])
		return middle;

	if (size == 1)
		return (-1);

        if (value < array[middle])
                return binary_search(array, middle-1, value);
	else
        {
                array = array + middle;
		return binary_search(array, middle, value);
        }
}
