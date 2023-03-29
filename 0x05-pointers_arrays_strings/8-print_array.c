#include <stdio.h>
#include "main.h"

/**
 * print_array - n elements of array is to be outputed
 * @arr: array of the integers
 * @num: number of element of an array to be outputed
 * Return: void
 */

void print_array(int *arr, int num)
{
	int j;

	for (j = 0; j < num; j++)
	{
		printf("%d", arr[j]);
		if (j != (num - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
