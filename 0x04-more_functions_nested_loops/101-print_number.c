#include "main.h"
#include <stdio.h>
/**
 * print_number - outputs an int
 * @num - int to output
 * return - none
 */
void print_number(int num)
{
	unsigned int a = num;
	if (num < 0)
	{
		num = num * -1;
		a = num;
		_putchar('-');
	}
	a = a / 10;
	if (a != 0)
		print_number(a);
	_putchar((unsigned int) num % 10 + '0');
}
