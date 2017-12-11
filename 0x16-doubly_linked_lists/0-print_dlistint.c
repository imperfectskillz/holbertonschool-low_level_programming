#include "lists.h"

/**
 *print_dlistint - print elements in list
 *@h: head of list
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
