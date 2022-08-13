#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *dup_name;
	char *dup_owner;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	dup_name = strdup(name);
	dup_owner = strdup(owner);

	ptr->name = dup_name;
	ptr->age = age;
	ptr->owner = dup_owner;

	return (ptr);
}
