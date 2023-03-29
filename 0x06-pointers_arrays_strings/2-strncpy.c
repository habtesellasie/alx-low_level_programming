#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @d: destination
 * @s: source
 * @num: the max number of byte
 * Return: a pointer
 */

char *_strncpy(char *d, char *s, int num)
{
	int i = 0, srcLen = 0;

	while (s[i++])
		srcLen++;
	for (i = 0; s[i] && i < num; i++)
		d[i] = s[i];
	for (i = srcLen; i < num; i++)
		d[i] = '\0';
	return (d);
}
