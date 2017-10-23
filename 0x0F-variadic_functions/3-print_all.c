#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints all
 *@format: formatter
 *Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	char *p;

	int i;

	va_start(valist, format);

	i = 0;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			p = va_arg(valist, char *);
			if (p == NULL)
				printf("(nil)");
			printf("%s", p);
			break;
		}
		if (format[i] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
