#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - mm
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
	{
		return (NULL);
	}

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
