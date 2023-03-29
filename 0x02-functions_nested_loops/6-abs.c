#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @c: number to be computed
 * Return: absolute value of a number or zero 
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs;
		abs = c * -1;
		return (abs);
	}
	return (c);
}
