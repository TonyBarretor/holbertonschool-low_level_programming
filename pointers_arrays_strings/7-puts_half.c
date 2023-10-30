#include "main.h"

/**
 * puts_half - char
 * @str: string printed
 * Description: Write a function that prints half of a string
 * Return: 0
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	i = (length - 1) / 2 + 1;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
