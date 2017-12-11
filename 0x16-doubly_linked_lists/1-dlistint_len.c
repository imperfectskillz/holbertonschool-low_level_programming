#include "lists.h"

/**
 *dlistint_len - numb of elements in list
 *@h: head
 *Return: numb of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
