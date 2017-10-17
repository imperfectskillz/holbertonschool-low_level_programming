#include <stdlib.h>
#include "dog.h"

int _strlen(char *p);
char *_strcpy(char *dest, char *src);

/**
 *new_dog - creates a new dog
 *@name: name
 *@age: age
 *@owner: owner
 *Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	p = malloc(sizeof(char) * (_strlen(i) + 1));
	if (p == NULL)
		return (NULL);
	p->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return;
	}
	_strcpy(p->name, name);
	_strcpy(p->owner, owner);
	p->age = age;
	return (p);
}

/**
 *_strlen - gets length of string
 *@p: pointer
 *Return: length
 */

int _strlen(char *p)
{
	int i = 0;
	while (p[i] != '\0')
		i++;
	return (i);
}

/**
 *_strcpy- copies string
 *@dest: destination
 *@src: source
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest = dest + '\0';
	return (dest);
}
