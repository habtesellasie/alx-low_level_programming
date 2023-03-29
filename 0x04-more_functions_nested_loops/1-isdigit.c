#include "main.h"

/**
 * _isdigit - is a character a digit?
 * @n: number is to be checked
 * Return: 1 for a character and 0 for else
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
