#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 char
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int no = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		no <<= 1;
		no += b[length] - '0';
		length++;
	}

	return (no);
}

