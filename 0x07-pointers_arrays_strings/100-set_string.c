#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: string
 * @to: string
 *
 * Return: Always 0.
 */

void set_string(char **s, char *to)
{
	char *ptr2 = s;
	char **ptr1 = **s;

	ptr2 = &s;
	ptr1 = &ptr2;

	ptr2 = *to;
}
