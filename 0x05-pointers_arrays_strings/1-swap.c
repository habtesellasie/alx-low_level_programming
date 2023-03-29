#include <stdio.h>

/**
 * swap_int - swaping the value of one int to the other
 * @a: first int
 * @b: second int
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
