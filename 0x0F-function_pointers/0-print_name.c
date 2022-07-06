#include <stdio.h>
#include "function_pointers"

/**
 * print_name - entry point
 * @name: name
 * @f: pointer
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
