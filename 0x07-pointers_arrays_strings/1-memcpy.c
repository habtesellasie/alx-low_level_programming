#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @d: input one
 * @s: input two
 * @num: input three
 * Return: Always 0
 */

char *_memcpy(char *d, char *s, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
		d[i] = s[i];
	return (d);
}
