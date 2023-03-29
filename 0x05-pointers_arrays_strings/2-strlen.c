#include <stdio.h>

/**
 * _strlen - returning the length of the string
 * @string: the length of the string
 * Return: length of @string
 */

size_t _strlen(const char *string)
{
	size_t len = 0;

	while (*string++)
		len++;
	return (len);
}
