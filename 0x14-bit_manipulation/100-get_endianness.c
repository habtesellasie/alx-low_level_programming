#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 and - 1
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}

