#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry point
 * @d: mmm
 * @name: mem2
 * @age: mem3
 * @owner: mem4
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		struct dog *myd = NULL;

		myd->name = name;
		myd->age = age;
		myd->owner = owner;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
