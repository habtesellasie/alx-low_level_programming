#include "main.h"
#include <stdio.h>

/**
 * main - shows args of a content
 * @argCount: argument count
 * @argVector: argument vector
 * Return: always 0
 */

int main(int argCount, char *argVector[])
{
	int i;

	for (i = 0; i < argCount; i++)
		printf("%s\n", argVector[i]);
	return (0);
}
