#include <stdio.h>
#include "main.h"

/**
 * print_rev - string in reverse
 * @str: a string to reverse print
 * Return: void
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
