#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - entry
 * @d: struct
 *
 * Return: Alwats 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	else
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
