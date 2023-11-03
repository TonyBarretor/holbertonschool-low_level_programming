#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog_ptr;
    new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));
    
    if (new_dog_ptr == NULL) {
        return NULL;
    }

    new_dog_ptr->name = strdup(name);
    if (new_dog_ptr->name == NULL) {
        free(new_dog_ptr);
        return NULL;
    }

    new_dog_ptr->owner = strdup(owner);
    if (new_dog_ptr->owner == NULL) {
        free(new_dog_ptr->name);
        free(new_dog_ptr);
        return NULL;
    }

    new_dog_ptr->age = age;

    return new_dog_ptr;
}

