#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argCount: The number of arguments supplied to the program.
 * @argVec: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argCount, char *argVec[])
{
	int byte, i;
	int (*add)(int, char **) = main;
	unsigned char opcode;

	if (argCount != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argVec[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);

		if (i == byte - 1)
			continue;
		printf(" ");

		add++;
	}

	printf("\n");

	return (0);
}
