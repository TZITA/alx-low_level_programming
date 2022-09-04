#include "main.h"

/**
 * print_times_table - e p
 * @n: number
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				p = i * j;
				if (p <= 99)
				{
					_putchar(' ');
				}
				if (p <= 9)
				{
					_putchar(' ');
				}
				if (p >= 100)
				{
					_putchar(p / 10 + '0');
					_putchar((p / 10) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar(p / 10 + '0');
				}
				_putchar(p % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
