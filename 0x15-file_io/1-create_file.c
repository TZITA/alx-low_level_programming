#include "main.h"
#include <string.h>

/**
 * create_file - entry point
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 or -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fileoo;

	if (filename == NULL)
	{
		return (-1);
	}

	fileoo = open("filename", O_CREAT | O_RDWR, 0600);
	if (fileoo == -1)
	{
		return (-1);
	}

	write(fileoo, text_content, strlen(text_content)); 

	close(fileoo);
	return (1);
}
