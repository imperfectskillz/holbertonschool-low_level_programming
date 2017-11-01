#include "lists.h"

/**
 *pop_listint - deletes head of node and returns data
 *@head: pointer pointer head
 *Return: data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	unsigned int j;

	if (*head == NULL)
		return (0);

	temp = *head;
	j = temp->n;
	*head = temp->next;
	free(temp);

	return (j);
}
