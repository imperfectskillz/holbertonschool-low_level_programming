#include "sort.h"

/**
 *selection_sort - selection sort
 *@array: array
 *@size: elements
 *Return: none
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min_i;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_i = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_i])
			{
				min_i = j;
			}
		}
		if (min_i == i)
			continue;
		else
		{
			temp = array[i];
			array[i] = array[min_i];
			array[min_i] = temp;
			print_array(array, size);
		}
	}
}
