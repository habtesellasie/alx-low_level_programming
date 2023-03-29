#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - converting the input to string
 * @arg: argument countor
 * @argVec: argument vector
 * Return: string
 */

char *argstostr(int arg, char **argVec)
{
	int cha = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char *str;

	if (arg == 0 || argVec == NULL)
		return (NULL);
	while (i < arg)
	{
		while (argVec[i][j])
		{
			cha++;
			j++;
		}
		j = 0;
		i++;
	}
	str = malloc((sizeof(char) * cha) + arg + 1);

	i = 0;
	while (argVec[i])
	{
		while (argVec[i][j])
		{
			str[k] = argVec[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	str[k] = '\0';
	return (str);
}
