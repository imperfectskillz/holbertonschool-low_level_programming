#include "lists.h"

/**
 *get_dnodeint_at_index - returns nth node
 *@head: head
 *@index: index at which node should return
 *Return: index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
