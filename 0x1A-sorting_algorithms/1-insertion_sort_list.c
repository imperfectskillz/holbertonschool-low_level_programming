#include "sort.h"

/**
 * insertion_sort_list - insertion sort
 *@list: poitner
 *Return: none
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *after;
	listint_t *rest;

	if (after == NULL || rest == NULL)
		return;

	after = (*list)->next;

	while (after != NULL)
	{
		rest = after->next;
		while (after->prev != NULL && after->n < after->prev->n)
		{
			before->next = after->next;
			after->next = before;
			before = after->prev;
			after->prev = after;

			if (after->prev == NULL)
				*list = after;
			print_list(*list);
		}
		after = rest;
	}
}
