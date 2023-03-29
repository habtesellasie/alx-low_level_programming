#include <stdio.h>
#include <stdlib.h>

/**
 * main - shows the min num of a coin
 * @argCount: argument count
 * @argVector: argument vector
 * Return: -1 or 0
 */

int main(int argCount, char *argVector[])
{
	int cent, coin = 0;

	if (argCount != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argVector[1]);
	while (cent > 0)
	{
		coin++;
		if ((cent - 25) >= 0)
		{
			cent = cent - 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent = cent - 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent = cent - 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent = cent - 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", coin);
	return (0);
}
