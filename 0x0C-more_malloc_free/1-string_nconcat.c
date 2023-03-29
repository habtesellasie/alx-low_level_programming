#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @str1: string one
 * @str2: string two
 * @num: num of strings
 * Return: concatenated string
 */

char *string_nconcat(char *str1, char *str2, unsigned int num)
{
	int i = 0;
	int j = 0;
	unsigned int k = 0;
	int len = 0;
	char *string;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	while (str1[i])
		i++;
	while (str2[k])
		k++;
	if (num >= k)
		len = i + k;
	else
		len = i + num;
	string = malloc(sizeof(char) * len + 1);
	if (string == NULL)
		return (NULL);
	k = 0;
	while (j < len)
	{
		if (j <= i)
			string[j] = str1[j];
		if (j >= i)
		{
			string[j] = str2[k];
			k++;
		}
		j++;
	}
	string[j] = '\0';
	return (string);
}
