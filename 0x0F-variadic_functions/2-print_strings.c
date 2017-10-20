#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints char *
 *@separator: delimiter
 *@n: number of chars
 *Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(valist, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(valist, char *));
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
