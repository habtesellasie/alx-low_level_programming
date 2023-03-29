#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - shows sums of args
 * @argCount: argument count
 * @argVector: argument vector
 * Return: always 0
 */

int main(int argCount, char *argVector[])
{
	int i;
	unsigned int j, sum = 0;
	char *save;

	if (argCount > 1)
	{
		for (i = 1; i < argCount; i++)
		{
			save = argVector[i];
			for (j = 0; j < strlen(save); j++)
			{
				if (save[j] < 48 || save[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(save);
			save++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
