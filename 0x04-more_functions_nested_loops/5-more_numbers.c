#include "main.h"
/** 
 * more_numbers print 10 times the number from 0 - 14
 * return 10 times the number starting from 0 - 14
 */
void more_numbers(void)
{
	int a, b;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
