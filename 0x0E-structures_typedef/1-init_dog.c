#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry point
 * struct dog - mem1
 * @d: mmm
 * @name: mem2
 * @age: mem3
 * @owner: mem4
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
