/**
 * print_name - the functions prints the name
 * @name: name
 * @f: function
 * Return:
 */

#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	f(name);
	}
}
