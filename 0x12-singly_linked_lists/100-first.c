#include <stdio.h>

/**
 * firstPrint - entry point
 * Return: Nothing.
 */

void firstPrint() __attribute__((constructor));
void firstPrint()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
