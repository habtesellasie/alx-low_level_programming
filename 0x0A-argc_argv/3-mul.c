#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - string to int
 * @str: the string to change
 * Return: the int from the str
 */

int _atoi(char *str)
{
	int i = 0, j = 0, num = 0, length = 0;
	int k = 0;
	int dig = 0;

	while (str[length] != '\0')
		length++;
	while (i < length && k == 0)
	{
		if (str[i] == ' ')
			++j;
		if (str[i] >= '0' && str[i] <= '9')
		{
			dig = str[i] - '0';
			if (j % 2)
				dig = -dig;
			num *= 10 + dig;
			k = 1;
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}
	if (k == 0)
		return (0);
	return (num);
}

/**
 * main - shows mults of two arg numbers
 * @argCount: argument count
 * @argVector: argument vector
 * Return: always 0
 */

int main(int argCount, char *argVector[])
{
	int num1, num2, result;

	if (argCount < 3 || argCount > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argVector[1]);
	num2 = _atoi(argVector[1]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
