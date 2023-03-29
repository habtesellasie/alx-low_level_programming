#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a character
 * @arg: A list of arguments pointing
 */
void print_char(va_list arg)
{
	char let;

	let = va_arg(arg, int);
	printf("%c", let);
}

/**
 * print_int - prints an int
 * @arg: A list of arguments pointing
 */
void print_int(va_list arg)
{
	int no;

	no = va_arg(arg, int);
	printf("%d", no);
}

/**
 * print_float - prints a float
 * @arg: A list of arguments pointing
 */
void print_float(va_list arg)
{
	float no;

	no = va_arg(arg, double);
	printf("%f", no);
}

/**
 * print_string - prints a string
 * @arg: A list of arguments pointing
 */
void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}

/**
 * print_all - prints anything
 * @format: a string of chars
 * @...: a variable number
 *
 * Return: depends
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0, j = 0;
	char *sep = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arguments, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			funcs[j].print(arguments);
			sep = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(arguments);
}
