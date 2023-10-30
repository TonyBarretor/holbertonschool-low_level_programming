#include "main.h"

/**
 * print_rev - char
 * @s: string printed in reverse
 * Description: prints a string, in reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
