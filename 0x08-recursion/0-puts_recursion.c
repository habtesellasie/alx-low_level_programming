#include "main.h"

/**
 * _puts_recursion - print a string, followed by
 * a new line
 * @string: a string
 * Return: nothing
 */

void _puts_recursion(char *string)
{
	if (*string == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*string);
	string++;
	_puts_recursion(string);
}
