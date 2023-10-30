/**
 * init_dog - initiañize the variables of struc dog
 * @dog: dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of owner
 * Return: 0
 */

#include "dog.h"
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->owner = strdup(owner);
	d->age = age;
}

