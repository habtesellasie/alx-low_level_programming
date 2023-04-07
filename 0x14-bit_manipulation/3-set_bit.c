#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @num: A pointer to a bit
 * @i: The i to set the indices start at 0
 * Return: If an error occurs - -1
 */
int set_bit(unsigned long int *num, unsigned int i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);

	*num ^= (1 << i);

	return (1);
}

