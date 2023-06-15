#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry point
 * @d: dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
