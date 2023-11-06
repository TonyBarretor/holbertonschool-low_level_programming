/**
 * free_dog - frees dog
 * @d: pointer to a dog
 * Return: 0
 */

#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
