#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_cp;
	char *owner_cp;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}

	name_cp = strdup(name);
	owner_cp = strdup(owner);

	if (name_cp == NULL || owner_cp == NULL)
	{
		free(new);
		free(name_cp);
		free(owner_cp);
		return (NULL);
	}

	new->name = name_cp;
	new->age = age;
	new->owner = owner_cp;

	return(new);
}
