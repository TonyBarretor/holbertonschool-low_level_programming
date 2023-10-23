#include "main.h"

/**
 * print_sign - int n
 * @n: the char
 * Description: chec
 * Return: 1 if c
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
