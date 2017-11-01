#include "lists.h"

/**
 *add_nodeint - adds new node at the beginning of list
 *@head: double pointer to list
 *@n: integer in new node
 *Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (temp == NULL)
		return (NULL);

        temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
