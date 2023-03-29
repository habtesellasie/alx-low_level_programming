#include "main.h"
/** 
 * print square - print squares n n times
 * @s - number of squares 
 * return none
 */
void print_square(int s)
{
	int a, b;
	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < s; a++)
		{
			for (b = 0; b < s; b++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
