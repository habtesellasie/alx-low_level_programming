#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @arr: the array
 * @num: the number of element of array
 * Return: nothing
 */

void reverse_array(int *arr, int num)
{
	int temp, ind;

	for (ind = num - 1; ind >= num / 2; ind--)
	{
		temp = arr[num - 1 - ind];
		arr[num - 1 - ind] = arr[ind];
		arr[ind] = temp;
	}
}
