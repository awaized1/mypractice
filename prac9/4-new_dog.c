#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;
	doggy = malloc(sizeof(struct dog));

	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
}
