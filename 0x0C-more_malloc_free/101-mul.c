#include <stdlib.h>
#include <stdio.h>

/**
  * _isdigit - is a string consists of digits
  * @argVec: pointer
  * Return: return 0 or 1
  */
int _isdigit(char *argVec)
{
	int i;

	i = 0;
	while (argVec[i])
	{
		if (argVec[i] >= '0' && argVec[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
  * _atoi - ascii digits to the values they represent
  * @str: string
  * Return: digits
  */
int _atoi(char *str)
{
	int i;
	int result;

	i = result = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += (str[i] - '0');
		}
		i++;
	}
	return (result);
}
/**
  * main - main function call
  * @argCount: argument count
  * @argVec: 2D array of arguments
  * Return: return 0 on success, 98 on failure
  */
int main(int argCount, char *argVec[])
{
	int i;

	if (argCount != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argCount; i++)
	{
		if (_isdigit(argVec[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
