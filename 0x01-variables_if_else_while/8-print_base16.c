#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char lower;
	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);
	putchar('\n');

	return (0);
}
