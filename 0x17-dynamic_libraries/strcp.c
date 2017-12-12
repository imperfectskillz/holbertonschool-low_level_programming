#include "holberton.h"
#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
	*dest = *src;
	printf("%s", dest);
	return (0);
}
