#include "main.h"
#include <string.h>

/**
 * append_text_to_file - entry point
 * @filename: file name
 * @text_content: text content
 *
 * Return: Int.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileoo;

	if (filename == NULL)
	{
		return (-1);
	}

	fileoo = open(filename, O_WRONLY | O_APPEND, 0334);

	if (fileoo == -1)
	{
		return (-1);
	}
	else if (text_content == NULL)
	{
		write(fileoo, 0, 0);
	}

	write(fileoo, text_content, strlen(text_content));
	return (1);
}
