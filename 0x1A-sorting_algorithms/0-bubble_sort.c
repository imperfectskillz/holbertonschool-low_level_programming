#include "sort.h"

/**
 *bubble_sort- function that sorts using bubble
 *@array: integers
 *@size: size of array
 *Return: none
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	int i;
	int flag = 1;
	int siz = size;

	if (array == NULL)
		return;

	while (flag == 1)
	{
		flag = 0;
		for (i = 0; i < siz - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				flag = 1;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);

				if (i == siz - 1 && flag == 1)
				{
					flag = 0;
					i = 0;
				}
			}
		}
	}
}
