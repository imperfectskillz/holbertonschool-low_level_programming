#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *list_len - returns number of elements
 *@h: pointer to head
 *Return: elements number
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		++counter;
	}
	return (counter);
}
