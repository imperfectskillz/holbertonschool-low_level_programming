#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all elements of list_t
 *@h: pointer to head
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodeCounter;

	if (h == NULL)
		return;

	while (h->next != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodeCounter++;
	}
	return (nodeCounter);
}
