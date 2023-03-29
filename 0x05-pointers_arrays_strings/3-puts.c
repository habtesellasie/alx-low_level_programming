#include "main.h"

/**
 * _puts - outputs a string
 * @string: string to be outputed
 * Return: void
 */

void _puts(char *string)
{
	for (; *string != '\0'; string++)
	{
		_putchar(*string);
	}
	_putchar('\n');
}
