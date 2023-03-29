#include "main.h"

/**
 * factorial - factorial of a number
 * @num: the number to calculate
 * Return: integer
 */

int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num <= 1)
		return (1);
	return (num * factorial(num - 1));
}
