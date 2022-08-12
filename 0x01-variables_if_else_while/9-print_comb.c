#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Nothing.
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i < 9)
		{
			putchar((i % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		i++;
		if (i == 9)
			putchar((i % 10) + '0');
	}
	return (0);
}
