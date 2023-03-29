#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @str: input one
 * @num: inpu two
 * Return: always 0
 */

char *_strstr(char *str, char *num)
{
	for (; *str != '\0'; str++)
	{
		char *first = str;
		char *second = num;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}
		if (*second == '\0')
			return (str);
	}
	return (NULL);
}
