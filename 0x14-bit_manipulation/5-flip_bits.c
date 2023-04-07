#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip
 * @num: The number
 * @flip_num: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int num, unsigned long int flip_num)
{
	unsigned long int xor = num ^ flip_num, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

