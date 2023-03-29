#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @size: size of allocate memory
 * Return: pointer
 */

void *malloc_checked(unsigned int size)
{
	void *poi;

	poi = malloc(size);
	if (poi == NULL)
		exit(98);
	return (poi);
}
