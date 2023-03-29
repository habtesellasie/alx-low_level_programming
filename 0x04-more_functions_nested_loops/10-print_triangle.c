#include "main.h"

/**
 * print_triangle - prints triangle
 * @s - size of the square
 * return - none
 */
void print_triangle(int s)
{
	int a, b, c;
	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < s; a++)
		{
			for (b = s - a; b > 1; b--)
			{
				_putchar(32);
			}
			for (c = 0; c <= a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
