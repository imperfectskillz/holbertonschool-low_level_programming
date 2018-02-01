#include "sort.h"

/**
 * insertion_sort_list - insertion sort
 *@list: poitner
 *Return: none
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *after;
	listint_t *before;

	if (after == NULL || before == NULL)
		return;

	after = (*list)->next;
	before = (*list)->prev;

	while (after != NULL)
	{
		while (before != NULL &&  > after->n < before->n)
		{
			before->next = after->next;
			after->next = before;
			before = after->prev;
			after->prev = after;

			if (after->prev == NULL)
				*list = after;
			print_list(*list);
		}
		after = after->next;
	}
}
