#include "main.h"

/**
 * _memset - Entery point
 * @str: destination
 * @byte: consstanc byte
 * @num: bytes
 * Return: Always 0
 */

char *_memset(char *str, char byte, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
		str[i] = byte;
	return (str);
}
