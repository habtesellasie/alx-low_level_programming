#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @fileN: A pointer to the name of file
 * @letts: The number of leters
 * Return: If the function fails or fileN is NULL - 0
 */
ssize_t read_textfile(const char *fileN, size_t letts)
{
	ssize_t openIt, r, wo;
	char *buffer;

	if (fileN == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letts);
	if (buffer == NULL)
		return (0);

	openIt = open(fileN, O_RDONLY);
	r = read(openIt, buffer, letts);
	wo = write(STDOUT_FILENO, buffer, r);

	if (openIt == -1 || r == -1 || wo == -1 || wo != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openIt);

	return (wo);
}
