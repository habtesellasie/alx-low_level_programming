#include "main.h"

/**
 * get_bit - Gets the value of a bit
 * @num: The bit
 * @i: The i to get the value at - indices start at 0
 * Return: If an error occurs - -1
 */
int get_bit(unsigned long int num, unsigned int i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((num & (1 << i)) == 0)
		return (0);

	return (1);
}

