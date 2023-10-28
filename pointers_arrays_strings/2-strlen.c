/**
 * _strlen - returns the length of a string
 * @s: the strng as a parameter
 * Return: length
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

	return (length);

}
