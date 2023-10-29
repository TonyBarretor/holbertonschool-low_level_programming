#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int counter;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size);

	if (ptr = NULL) 
	{
		return (NULL);
	}

	for (counter = 0; counter < size; counter++) /* para ingresar a cada elemento del array */
	{
		ptr[contador] = c;
				    
	}

	return (ptr);
}
