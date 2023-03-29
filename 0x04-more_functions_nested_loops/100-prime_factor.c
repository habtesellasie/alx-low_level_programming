#include <stdio.h>
#include "math.h"
/** 
 * main - the largest prime factor of the number 612852475143
 * return - 0
 */
int main(void)
{
	long a, maxFactor;
	long num = 612852475143;
	float sqr = sqrt(num);
	for (a = 1; a <= sqr; a ++)
	{
		if (num % a == 0)
		{
			maxFactor = num / a;
		}
	}
	printf("%ld\n", maxFactor);
	return(0);
}
