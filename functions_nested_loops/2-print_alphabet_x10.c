/**
 * print_alphabet_x10 - putchar prints lettter by letter
 *Return: what it mention in main.h
 */

#include "main.h"

void print_alphabet_x10(void)
{
	char let;
	int rep;

	for (rep = 0; rep <= 9; rep++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
		_putchar(let);
		}

	_putchar('\n');

	}
}
