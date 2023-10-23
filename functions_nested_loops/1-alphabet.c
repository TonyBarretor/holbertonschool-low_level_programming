/**
 * main - putchar prints lettter by letter
 *Return: what it mention in main.h
 */

#include "main.h"

void print_alphabet(void)
{
	char let;
	
for (let = 97; let <= 122; let++)	
	{
		_putchar(let);
	}

	_putchar('\n');
}
