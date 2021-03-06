#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - enrty point
 * @format: all
 *
 * Return: Nonthing.
 */

void print_all(const char * const format, ...)
{
	const char *p;
	int i;
	char *pp = 0;

	va_list xx;

	va_start(xx, format);
	if (*format != 'c' || *format != 'i' || *format != 'f' || *format != 's')
	{
		exit(0);
	}
	if (pp == NULL)
	{
		pp = "(nil)";
	}
	

	while (*p != '%')
	{
		printf("%d", *p);
		p++;
	}
	p++;
	switch(*p)
	{
		case 'c': i = va_arg(xx, int);
			  printf("%c", i);
			  break;
		case 'i': i = va_arg(xx, int);
			  printf("%d", i);
			  break;
		case 'f': i = va_arg(xx, int);
			  printf("%d", i);
			  break;
		case 's': pp = va_arg(xx, char *);
			  printf("%s", pp);
			  break;
	}
	printf("\n");
	va_end(xx);
}

char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *pointer;

	pointer = &buffer[49];
	*pointer = '\0';

	while(num != 0)
	{
		*--pointer = Representation[num % base];
		num /= base;
	}

	return (pointer);
}
