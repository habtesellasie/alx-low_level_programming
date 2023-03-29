#include <stdio.h>
/**
 * main - prints the sum of all x of 3 or 5 -- 1024
 * Return: always
 */
int main(void)
{
	int a, sum = 0;
	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
