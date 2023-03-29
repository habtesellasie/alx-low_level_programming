#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @str: the string
 * Return: len of a string
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(str + 1));
}

/**
 * compair - compares the character of a string
 * @str: the string
 * @i: small iterator
 * @j: big iterator
 * Return: always 0
 */

int compair(char *str, int i, int j)
{
	if (*(str + i) == *(str + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + compair(str, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - if a string is palindrome
 * @str: a string
 * Return: 1 if palindrome else if not
 */

int is_palindrome(char *str)
{
	if (*str == '\0')
		return (1);
	return (compair(str, 0, _strlen_recursion(str) - 1));
}
