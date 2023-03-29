#include "main.h"
#include <stdio.h>

/**
 * main - printing the name
 * @argCount: argument countor
 * @argVector: arougmetn vector
 * Return: always 0
 */

int main(int argCount, char *argVector[])
{
	(void) argCount;

	printf("%s\n", argVector[0]);
	return (0);
}
