#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block
 * @pointer: pointer location
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: memory block
 */

void *_realloc(void *pointer, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *num;

	if (new_size == old_size)
		return (pointer);
	if (pointer == NULL)
	{
		num = malloc(new_size);
		if (num == NULL)
			return (NULL);
		return (num);
	}
	else
	{
		if (new_size == 0)
		{
			free(pointer);
			return (NULL);
		}
	}
	num = malloc(new_size);
	if (num == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		num[i] = ((char *) pointer)[i];
	free(pointer);
	return (num);
}
