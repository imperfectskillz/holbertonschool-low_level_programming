#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - calls function that prints name
 *@name: string to be called on
 *@f: pointer function
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
