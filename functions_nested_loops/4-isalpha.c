#include "main.h"

/**
 * _isalpha - int
 * @c: the char
 * Description: chec
 * Return: 1 if c
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
