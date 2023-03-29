#include "main.h"

/**
 * _strspn - a function that searches a string for
 * any of a set of bytes.
 * @str: input one
 * @acc: input two
 * Return: always 0
 */

unsigned int _strspn(char *str, char *acc)
{
	unsigned int i = 0;
	int j;

	while (*str)
	{
		for (j = 0; acc[j]; j++)
		{
			if (*str == acc[j])
			{
				i++;
				break;
			}
			else if (acc[j + 1] == '\0')
				return (i);
		}
		str++;
	}
	return (i);
}
