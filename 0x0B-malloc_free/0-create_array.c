#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @si: size for an array
 * @cha: the characters to stor in an array
 *
 * Return: the array
 */

char *create_array(unsigned int si, char cha)
{
	unsigned int i;
	char *str;

	if (si == 0)
		return (NULL);
	str = malloc(si * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < si; i++)
		str[i] = cha;
	return (str);
}
