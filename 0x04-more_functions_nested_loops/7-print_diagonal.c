#include "main.h"
/**
 * print_diagonal - draws diagonal lines 
 * @num - number of diagonal lines
 * return none
 */
void print_diagonal(int num)
{
	int a, b;
	if (num <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < num; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
