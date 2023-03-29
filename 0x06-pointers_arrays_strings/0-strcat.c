#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatnating two strings
 * @d: destination
 * @s: source
 * Return: result of the destination
 */

char *_strcat(char *d, char *s)
{
	int destLen = 0, i;

	while (d[destLen])
	{
		destLen++;
	}
	for (i = 0; s[i] != 0; i++)
	{
		d[destLen] = s[i];
		destLen++;
	}
	d[destLen] = '\0';
	return (d);
}
