#include "sort.h"

/**
 *selection_sort - selection sort
 *@array: array
 *@size: elements
 *Return: none
 */

void selection_sort(int *array, size_t size)
{
	int i;
	int j;
	int min_i;
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
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}
