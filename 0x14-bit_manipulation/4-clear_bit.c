#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0
 * @num: A pointer to the bit
 * @i: The i to set the value at indices start at 0
 * Return: If an error occurs - -1
 */
int clear_bit(unsigned long int *num, unsigned int i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);

	*num &= ~(1 << i);

	return (1);
}

