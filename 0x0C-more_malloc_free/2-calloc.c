#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @num: num of mems
 * @size: size of mems
 * Return: memory of an array
 */

void *_calloc(unsigned int num, unsigned int size)
{
	int i = 0;
	int len = 0;
	char *poi;

	if (num == 0 || size == 0)
		return (NULL);
	len = num * size;
	poi = malloc(len);
	if (poi == NULL)
		return (NULL);
	while (i < len)
	{
		poi[i] = 0;
		i++;
	}
	return (poi);
}
