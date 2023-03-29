#include <stdio.h>
#include "main.h"

/**
 * _strchr - a function that copies memory area.
 * @src: input one
 * @ch: input two
 * Return: always 0
 */

char *_strchr(char *src, char ch)
{
	int i;

	for (i = 0; src[i] >= '\0'; i++)
	{
		if (src[i] == ch)
			return (src + i);
	}
	return (NULL);
}
