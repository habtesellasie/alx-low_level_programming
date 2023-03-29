#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - Prints an integer.
 * @numb: The integer to be printed.
 */
void print_number(int numb)
{
	unsigned int num = numb;

	if (numb < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
