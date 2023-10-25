/**
 * int_strlean - returns the length of a string
 * @s: the strng
 * Return: 
 */

#include "main.h"

int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}

	return length;

}
