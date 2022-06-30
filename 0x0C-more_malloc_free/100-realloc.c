#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

/**
 * _realloc - entry point
 * @ptr: pointer
 * @old_size: size old
 * @new_size: size new
 *
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrn;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		assert((ptr) && (new_size > old_size));
		ptrn = malloc(new_size);
		if (ptrn)
		{
			memcpy(ptrn, ptr, old_size);
			free(ptr);
		}
		return (ptrn);
	}
}
