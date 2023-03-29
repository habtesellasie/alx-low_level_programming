#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatnating two strings
 * @str1: the first string
 * @str2: the second string
 * Return: two strings
 */

char *str_concat(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	char *str;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	while (str1[i])
		i++;
	while (str2[j])
		j++;

	len = i + j;
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (NULL);
	j = 0;

	while (k < len)
	{
		if (k <= i)
			str[k] = str1[k];
		if (k >= i)
		{
			str[k] = str2[j];
			j++;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}
