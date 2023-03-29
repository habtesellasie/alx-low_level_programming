#include "main.h"
/**
 * print_times_table - prints multiplication table for the input number starting with 0
 * @no: value of table
 */
void print_times_table(int no)
{
	int num, mul, pro;
	if (no >= 0 && no <= 15)
	{
		for (num = 0; num <= no; num++)
		{
			_putchar('0');
			for (mul = 1; mul <= no; mul++)
			{
				_putchar(',');
				_putchar(' ');
				pro = num * mul;
				if (pro <= 99)
					_putchar(' ');
				if (pro <= 9)
					_putchar(' ');
				if (pro >= 100)
				{
					_putchar((pro / 100) + '0');
					_putchar(((pro / 10)) % 10 + '0');
				}
				else if (pro <= 99 && pro >= 10)
				{
					_putchar((pro / 10) + '0');
				}
				_putchar((pro % 10) + '0');
			}
			_putchar('\n');
					}
					}
					}
