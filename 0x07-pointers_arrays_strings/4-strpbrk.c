#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - a function that searches a string for
 * any of a set of bytes.
 * @str: input one
 * @acc: input two
 * Return: always 0
 */

char *_strpbrk(char *str, char *acc)
{
	int i, num;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (num = 0; acc[num] != '\0'; num++)
		{
			if (str[i] == acc[num])
				return (str + i);
		}
	}
	return (NULL);
}
