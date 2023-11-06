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
	int i = -1;
	char *separator = "";

	va_start(args, format);

	while (format && format[++i])
	{
	(format[i] == 'c') && printf("%s%c", separator, va_arg(args, int))
		&& (separator = ", ");
	(format[i] == 'i') && printf("%s%d", separator, va_arg(args, int))
		&& (separator = ", ");
	(format[i] == 'f') && printf("%s%f", separator, va_arg(args, double))
		&& (separator = ", ");
		if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			printf("%s%s", separator, (str != NULL) ? str : "(nil)");
			separator = ", ";
		}
	}

	printf("\n");

	va_end(args);
}
