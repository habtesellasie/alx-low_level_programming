#include "main.h"

/**
 * _strlen_recursion - a length of a string
 * @string: the string
 * Return: int value.
 */

int _strlen_recursion(char *string)
{
	if (*string == '\0')
	{
		return (0);
	}
	string++;
	return (_strlen_recursion(string) + 1);
}
