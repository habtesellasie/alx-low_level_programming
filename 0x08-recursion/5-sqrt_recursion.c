#include "main.h"
#include <stdio.h>

int _sqrt(int num, int i);

/**
 * _sqrt_recursion - square root of a number
 * @num: a number to calc square root of
 * Return: square root
 */

int _sqrt_recursion(int num)
{
	return (_sqrt(num, 1));
}

/**
 * _sqrt - square root
 * @num: a number to square root
 * @i: index to loop
 * Return: square root of num
 */

int _sqrt(int num, int i)
{
	int sqrt = i * i;

	if (sqrt > num)
		return (-1);
	if (sqrt == num)
		return (i);
	return (_sqrt(num, i + 1));
}
