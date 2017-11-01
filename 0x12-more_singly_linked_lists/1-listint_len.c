#include "lists.h"

/**
 *listint_len - function that returns the number of elements in a linked list
 *@h: list being passed
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int nodeCounter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodeCounter++;
		h = h->next;
	}
	return (nodeCounter);
}
