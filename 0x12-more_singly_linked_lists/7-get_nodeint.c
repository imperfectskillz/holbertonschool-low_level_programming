#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a list
 *@head: pointer head
 *@index: index at which node should return
 *Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		i++;
		head = head->next;
	}
	return (head);
}
