#include "main.h"

/**
 * puts_half - outputs only half of the string
 * @string: the string to be sliced
 * Return: void
 */

void puts_half(char *string)
{
	int i;
	int j = 0;

	while (string[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		i = (j - 1) / 2;
		i += 1;
	}
	else
	{
		i = j / 2;
	}

	for (; i < j; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
}
