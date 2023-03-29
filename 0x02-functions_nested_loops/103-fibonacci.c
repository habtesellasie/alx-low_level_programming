#include <stdio.h>
/**
 * main - sum of even fibonacci nums
 * less than 4000000
 * Return: null
 */
int main(void)
{
	int a = 0;
        long b = 1, c = 2, sum = c;
        while (b + c < 4000000)
        {
        c = c + b;
	if (c % 2 == 0)
		sum = sum + c;
	b = c - b;
        ++a;
        }
        printf("%ld\n", sum);
        return (0);
}	
