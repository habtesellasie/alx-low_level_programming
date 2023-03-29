#include "main.h"

/**
 * _print_rev_recursion - a string in reverse
 * @string: the string
 * Return: nothing
 */

void _print_rev_recursion(char *string)
{
	if (*string == '\0')
	{
		return;
	}
	string++;
	_print_rev_recursion(string);
	string--;
	_putchar(*string);
}
