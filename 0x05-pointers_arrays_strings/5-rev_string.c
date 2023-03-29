#include "main.h"

/**
 * rev_string - reverse a string
 * @str: a string to be reversed
 * Return: void
 */

void rev_string(char *str)
{
	int length = 0;
	int i = 0;
	char temp;

	while (str[i++])
	length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}
