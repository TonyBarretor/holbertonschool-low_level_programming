#include "main.h"

/**
 * _isalpha - int
 * @c: the char
 * Description: chec
 * Return: 1 if c
 */
int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0 )
	{
		ld = -ld;
	}
	
	_putchar(ld + '0');
	
	return (ld);
}
