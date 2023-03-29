#include "main.h"

/**
 * _strncat - a function that concatnates two strings.
 * @d: destination string
 * @s: source
 * @num: number of bytes
 * Return: a pointer
 */

char *_strncat(char *d, char *s, int num)
{
	int i = 0, destLen = 0;

	while (d[i++])
		destLen++;
	for (i = 0; s[i] && i < num; i++)
		d[destLen++] = s[i];
	return (d);
}
