#include "main.h"

/**
 * cap_string - capitalize a string
 * @string: a string to capitalize
 * Return: a pointer
 */

char *cap_string(char *string)
{
	int i = 0;

	while (string[i])
	{
		while (!(string[i] >= 'a' && string[i] <= 'z'))
			i++;
		if (string[i - 1] == ' ' ||
				string[i - 1] == '\t' ||
				string[i - 1] == '\n' ||
				string[i - 1] == ',' ||
				string[i - 1] == ';' ||
				string[i - 1] == '.' ||
				string[i - 1] == '!' ||
				string[i - 1] == '?' ||
				string[i - 1] == '"' ||
				string[i - 1] == '(' ||
				string[i - 1] == ')' ||
				string[i - 1] == '{' ||
				string[i - 1] == '}' ||
				i == 0)
			string[i] -= 32;
		i++;
	}
	return (string);
}
