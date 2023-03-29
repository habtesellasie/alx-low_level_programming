#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adding two ints
 * @n1: first integer
 * @n2: second integer
 * @r: array to store
 * @arrSize: size of r
 * Return: sum of strings
 */

char *infinite_add(char *n1, char *n2, char *r, int arrSize)
{
	int c = 0, i = 0, i2;
	char *s1 = n1, *s2 = n2;

	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
		s2++;
	arrSize--;
	r[arrSize] = 0;
	s1--;
	s2--;
	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[i] = *s2 - '0' + *s1 + c;
		c = 0;
		if (r[i] > '9')
		{
			c++;
			r[i] -= 10;
		}
		i++;
		s2--;
		s1--;
		if (arrSize == i && (s1 != n1 - 1 || s2 != n2 - 1 || c == 1))
			return (0);
	}
	while (s1 != n1 - 1)
	{
		r[i] = *s1 + c;
		c = 0;
		if (r[i] > '9')
		{
			c = 1;
			r[i] -= 10;
		}
		s1--;
		i++;
		if (arrSize == i && (s1 != n1 - 1 ||  c == 1))
			return (0);
	}
	while (s2 != n2 - 1)
	{
		r[i] = *s2 + c;
		c = 0;
		if (r[i] > '9')
		{
			c = 1;
			r[i] -= 10;
		}
		s2--;
		i++;
		if (arrSize == i && (s2 != n2 - 1 || c == 1))
			return (0);
	}
	if (c == 1)
	{
		r[i] = '1';
		r[i + 1] = 0;
	}
	else
	{
		r[i--] = 0;
	}
	i2 = 0;
	while (i2 <= i)
	{
		c = r[i];
		r[i] = r[i2];
		r[i2] = c;
		i--;
		i2++;
	}
	return (r);
}
