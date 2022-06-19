#include "main.h"
#include <stdio.h>

/**
 * main -check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%d", fibonacci(i));
		printf(", ");
	}
	return (0);
}
