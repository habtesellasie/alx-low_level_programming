#include "main.h"

/**
 * create_file - Creates a file
 * @fileN: A pointer to the name of the file to create
 * @textContent: A pointer to a string to write to the file
 * Return: If the function fails - -1 / 1
 */

int create_file(const char *fileN, char *textContent)
{
	int o, wo, length = 0;

	if (fileN == NULL)
		return (-1);

	if (textContent != NULL)
	{
		for (length = 0; textContent[length];)
			length++;
	}

	o = open(fileN, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wo = write(o, textContent, length);

	if (o == -1 || wo == -1)
		return (-1);

	close(o);

	return (1);
}

