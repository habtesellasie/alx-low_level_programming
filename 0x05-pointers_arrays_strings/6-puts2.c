#include "main.h"

/**
 * puts2 - print other character of the string
 * @string: the string
 * Return: void
 */

void puts2(char *string)
{
	int i, j = 0;

	while (string[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
}
