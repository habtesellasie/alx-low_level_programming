#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @num: The number of paramters
 * @...: A variable to calculate the sum of
 *
 * Return: If n == 0 - 0
 */

int sum_them_all(const unsigned int num, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, num);

	for (i = 0; i < num; i++)
		sum = sum + va_arg(nums, int);

	va_end(nums);
	return (sum);
}
