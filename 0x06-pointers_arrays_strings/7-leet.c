#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * leet - a function that encodes string to 1337
 * @string: a string
 * Return: half of input
 */

char *leet(char *string)
{
	char *r = string;
	char a[] = { 'a', 'e', 'o', 't', 'l'};
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*string)
	{
		for (i = 0; i < 5; i++)
		{
			if (*string == a[i] || *string == a[i] - 32)
			*string = n[i] + '0';
		}
		string++;
	}
	return (r);
}
