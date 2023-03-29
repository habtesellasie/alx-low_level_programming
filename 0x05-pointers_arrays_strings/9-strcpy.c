#include "main.h"

/**
 * _strcpy - copy a string
 * @d: destination
 * @s: source
 * Return: pointer to d
 */

char *_strcpy(char *d, char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		d[i] = s[i];
	}
	d[i++] = '\0';
	return (d);
}
