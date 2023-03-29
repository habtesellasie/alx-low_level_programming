#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @arr: input one
 * @size: input two
 * Return: always 0
 */

void print_diagsums(int *arr, int size)
{
	int i, num, sum = 0, sum1 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum = sum + arr[i];

	for (num = size - 1; num <= (size * size) - size; num = num + size - 1)
		sum1 = sum1 + arr[num];
	printf("%d, %d\n", sum, sum1);
}
