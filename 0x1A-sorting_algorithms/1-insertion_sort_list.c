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

	if (list == NULL || *list == NULL)
		return;

	after = (*list)->next;

	while (after != NULL)
	{
		rest = after->next;
		while (after->prev != NULL && after->n < after->prev->n)
		{
			after->prev->next = after->next;
			if (after->next != NULL)
				after->next->prev = after->prev;
			after->next = after->prev;
			after->prev = after->prev->prev;
			after->next->prev = after;

			if (after->prev != NULL)
				after->prev->next = after;
			else
				*list = after;
			print_list(*list);
		}
		after = rest;
	}
}
