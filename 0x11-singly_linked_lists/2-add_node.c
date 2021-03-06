#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _strlen(const char *str);

/**
 *add_node - adds a new node
 *@head: head pointer
 *@str: string to be put into new node
 *Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;
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
