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
	int flag;
	int i;

	va_start(valist, format);
	i = 0;
	if (format == NULL)
		return;
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
		case 'c':
			flag = 0;
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			flag = 0;
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			flag = 0;
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			flag = 0;
			p = va_arg(valist, char*);
			if (p == NULL)
				p = "(nil)";
			printf("%s", p);
			break;
		default:
			flag = 1;
			break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
