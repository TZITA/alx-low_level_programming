#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * putchar - entry point
 * @c: char
 *
 * Return: Int.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
