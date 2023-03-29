#include "main.h"
/** 
 * print_most_numbers - print numbers from 0 - 9
 * but excluding 2 and 4
 * return a number from 0 - 9
 */
void print_most_numbers(void)
{
	int a = 0;
	for (; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
