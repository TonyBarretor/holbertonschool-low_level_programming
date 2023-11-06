/**
 * print_strings - print strings
 * @separator: sep
 * @n: number
 * Return: 0
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i != n - 1 && str != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
