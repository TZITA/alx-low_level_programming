#include "main.h"

/**
 * largest_number - returns the largest of 3 integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}
	else if (a > c && c > b)
	{
		largest = a;
	}
	else if ()
	else
	{
		largest = c;
	}

	return (largest);
}
