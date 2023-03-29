#include "main.h"

/**
 * _pow_recursion - x raised to the power of y
 * @x: value one
 * @y: how many times to multiply x with
 * Return: x multiplied y times by itself
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
