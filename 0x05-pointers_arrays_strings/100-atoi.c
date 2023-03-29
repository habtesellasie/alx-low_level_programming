#include "main.h"

/**
 * _atoi - converts a str to an int
 * @string: a string to change
 * Return: an integer
 */

int _atoi(char *string)
{
	int i = 0, m = 1, isInt = 0;
	unsigned int n = 0;

	while (string[i])
	{
		if (string[i] == 45)
		{
			m *= -1;
		}
		while (string[i] >= 48 && string[i] <= 57)
		{
			isInt = 1;
			n = (n * 10) + (string[i] - '0');
			i++;
		}
		if (isInt == 1)
		{
			break;
		}
		i++;
	}
	n *= m;
	return (n);
}
