#include <stdio.h>

/**
 * firstPrint - entry point
 * Return: Nothing.
 */

void firstPrint(void) __attribute__((constructor));

void firstPrint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
