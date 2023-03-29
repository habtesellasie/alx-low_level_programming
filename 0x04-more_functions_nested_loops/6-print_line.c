#include "main.h"
/** 
 * print_line draws a straight line 
 * @num - number of line 
 * return none
 */
void print_line(int num)
{
	int n;
	if (num <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < num; n++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
