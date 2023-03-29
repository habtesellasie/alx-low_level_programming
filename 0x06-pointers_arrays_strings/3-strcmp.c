#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @str1: a first string
 * @str2: a second string
 * Return: a string
 */

int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
