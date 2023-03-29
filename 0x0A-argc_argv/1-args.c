#include "main.h"
#include <stdio.h>

/**
 * main - shows numbers of args
 * @argCount: argument count
 * @argVector: argument vector
 * Return: always 0
 */

int main(int argCount, char *argVector[])
{
	(void) argVector;

	printf("%d\n", argCount - 1);
	return (0);
}
