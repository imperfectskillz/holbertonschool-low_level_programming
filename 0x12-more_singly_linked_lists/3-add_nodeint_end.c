#include "lists.h"

/**
 *add_nodeint_end - adds node at end
 *@head: head pointer
 *@n: number
 *Return: addy of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *last;

	temp = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;
	last = *head;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = temp;
	return (*head);
}
