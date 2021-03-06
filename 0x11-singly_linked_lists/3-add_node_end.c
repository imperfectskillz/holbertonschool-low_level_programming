#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _strlen(const char *str);

/**
 *add_node_end - adds node to end
 *@head: beginning of list
 *@str: str to be put into new node
 *Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *last;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	temp->next = NULL;
	temp->str = strdup(str);
	temp->len = _strlen(str);
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

/**
 *_strlen - length of string
 *@str: given
 *Return: length
 */

int _strlen(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != 0)
		i++;

	return (i);
}
