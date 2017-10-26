#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_list - prints all elements of list_t
 *@h: pointer to head
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodeCounter = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodeCounter++;
	}
	return (nodeCounter);
}
