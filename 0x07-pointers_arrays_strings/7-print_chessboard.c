#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @arr: array
 * Return: always 0
 */

void print_chessboard(char (*arr)[8])
{
	int i, num;

	for (i = 0; i < 8; i++)
	{
		for (num = 0; num < 8; num++)
			_putchar(arr[i][num]);
		_putchar('\n');
	}
}
