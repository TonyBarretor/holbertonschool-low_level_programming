/**
 * _islower - int
 * @c: the characac checked
 * Description: checks for lowercase char
 * REturn: 1 if c is lower, 0 otherwise
 */

#include "main.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
