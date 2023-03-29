#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @string: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *string)
{
	int i = 0, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (string[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (string[i] == alpha[j])
			{
				string[i] = rot[j];
				break;
			}
			j++;
		}

		i++;
	}
	return (string);
}
