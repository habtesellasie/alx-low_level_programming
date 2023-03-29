#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @sep: The string
 * @num: The number of a strings
 * @...: A variable number
 *
 * Return: depends on the sep
 */
void print_strings(const char *sep, const unsigned int num, ...)
{
	va_list strs;
	char *str;
	unsigned int i;

	va_start(strs, num);

	for (i = 0; i < num; i++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (num - 1) && sep != NULL)
			printf("%s", sep);
	}

	printf("\n");

	va_end(strs);
}
