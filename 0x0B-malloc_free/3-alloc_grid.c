#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers
 * @width: a width
 * @height: the height
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int k;
	int len;
	int **poi;

	if (width <= 0 || height <= 0)
		return (NULL);
	poi = malloc(sizeof(int *) * height);
	if (poi == NULL)
	{
		free(poi);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		poi[i] = malloc(sizeof(int) * width);

		if (poi[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(poi[j]);
			free(poi);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (len = 0; len < width; len++)
			poi[k][len] = 0;
	}
	return (poi);
}
