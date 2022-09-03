#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Nothing.
 */

int main(void)
{
	int i = 1;

	while (i < 90)
	{
		if (i / 10)
		{
			putchar(i / 10 + '0');
		}
		else
		{
			putchar('0');
		}
		putchar(i % 10 + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}
