#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: Destination String pointer
 * @src: Source String pointer
 * Return: copy of String source
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
