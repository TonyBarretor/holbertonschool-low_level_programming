/**
 * create_array - creates an array takeing arguments size and c
 * @size: the size of the memory
 * @c: the character
 * Return: 0
 */

#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}

for (counter = 0; counter < size; counter++)
{
	ptr[counter] = c;
}
return (ptr);
}
