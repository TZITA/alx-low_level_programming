#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two string
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char s1 = *dest;
	char s2 = *src;
	char s3 = s1;
	char *ptr;

	s1 = s1 + s2;
	ptr = s3;
	
	return (dest);
}
