/**
 * init_dog - initiañize the variables of struc dog
 * @name: name of dog
 * @age: age of the dog
 * @d: pointer to receive
 * @owner: name of owner
 * Return: 0
 */

#include "dog.h"
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).owner = owner;
	(*d).age = age;
}
