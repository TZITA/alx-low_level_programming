#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's name age owner
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Dog type
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif