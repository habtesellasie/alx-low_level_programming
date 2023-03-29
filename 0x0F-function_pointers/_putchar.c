#include <unistd.h>

/**
 * _putchar - writes the char ch
 * @ch: the char to be printed
 * Return: 1 or -1
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
