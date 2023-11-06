/**
 * print_all - print
 * @format: format
 * Return: 0
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	char current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i++];

		if (current_format == 'c')
			printf("%c", (char)va_arg(args, int));
		else if
			(current_format == 'i') printf("%d", va_arg(args, int));
		else if
			(current_format == 'f') printf("%f", (float)va_arg(args, double));
		else if
			(current_format == 's')
		{
			str = va_arg(args, char *);
			printf("%s", (str == NULL) ? "(nil)" : str);
		}

		if (format[i])
			printf(", ");
	}

	printf("\n");

	va_end(args);
}
