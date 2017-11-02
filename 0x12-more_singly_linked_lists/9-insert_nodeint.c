#include "lists.h"

/**
 *insert-nodeint_at_index - inserts a new node at given pos.
 *@head: pointer pointer head
 *@idx: given point
 *@n: data
 *Return: addy of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp != NULL)
	{
		if (i == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (new);
}
