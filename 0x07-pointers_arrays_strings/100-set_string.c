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
	*to = &*s;
}
