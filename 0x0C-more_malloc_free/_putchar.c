#include <unistd.h>

/**
 * _putchar - writes a char
 * @c: the char
 * Return: 1 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
