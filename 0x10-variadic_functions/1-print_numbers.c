#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @sep: between numbers a string
 * @num: a number of int
 * @...: nums of nums
 * Return: nothing
 */

void print_numbers(const char *sep, const unsigned int num, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, num);

	for (i = 0; i < num; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i != (num - 1) && sep != NULL)
			printf("%s", sep);
	}
	printf("\n");
	va_end(nums);
}
