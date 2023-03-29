#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @arr: array
 * @size: size of the array
 * @act: a pointer to the function
 * Return: nothing
 */

void array_iterator(int *arr, size_t size, void (*act)(int))
{
	if (arr == NULL || act == NULL)
		return;
	while (size-- > 0)
	{
		act(*arr);
		arr++;
	}
}
