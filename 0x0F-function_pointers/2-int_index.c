#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @arr: the array
 * @size: the size of the array
 * @compare: to compare values
 * Return: 0 or -1
 */

int int_index(int *arr, int size, int (*compare)(int))
{
	int i;

	if (arr == NULL || compare == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (compare(arr[i]) != 0)
			return (i);
	}
	return (-1);
}
