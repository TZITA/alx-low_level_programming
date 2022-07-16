#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Nothing.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i < 9)
		{
			putchar((i % 10) + '0');
			putchar(' ');
			putchar(',');
		}
		if (i == 9)
		{
			putchar((i % 10) + '0');
		}
	}
	return (0);
}
