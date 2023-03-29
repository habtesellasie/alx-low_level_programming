#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicating a string
 * @string: the string to be duplicated
 * Return: duplicated string
 */

char *_strdup(char *string)
{
	int ind = 1, j = 0;
	char *str;

	if (string == NULL)
		return (NULL);
	while (string[ind])
		ind++;
	str = malloc((sizeof(char) * ind) + 1);
	if (str == NULL)
		return (NULL);
	while (j < ind)
	{
		str[j] = str[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
