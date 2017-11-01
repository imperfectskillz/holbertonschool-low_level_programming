#include "lists.h"

/**
 *print_listint - prints all elements of the list
 *@h: list being passed
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodeCounter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCounter++;
	}
	return (nodeCounter);
}
