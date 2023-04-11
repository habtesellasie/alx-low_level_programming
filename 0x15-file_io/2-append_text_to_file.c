#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @fileName: A pointer to the name of the file
 * @textContent: The string to add to the end of the file
 * Return: If the function fails or fileName is NULL - -1 other wise 1
 */
int append_text_to_file(const char *fileName, char *textContent)
{
	int o, wo, length = 0;

	if (fileName == NULL)
		return (-1);

	if (textContent != NULL)
	{
		for (length = 0; textContent[length];)
			length++;
	}

	o = open(fileName, O_WRONLY | O_APPEND);
	wo = write(o, textContent, length);

	if (o == -1 || wo == -1)
		return (-1);

	close(o);

	return (1);
}

