#include "main.h"
#include <stdlib.h>

int word_len(char *string);
int count_words(char *string);
char **strtow(char *string);

/**
 * word_len - locating a string
 * @string: string
 * Return: the index
 */

int word_len(char *string)
{
	int i = 0;
	int l = 0;

	while (*(string + i) && *(string + i) != ' ')
	{
		l++;
		i++;
	}
	return (l);
}

/**
 * count_words - how much is the number of words
 * @string: string
 * Return: the number of the word string
 */

int count_words(char *string)
{
	int i = 0;
	int word = 0;
	int l = 0;

	for (i = 0; *(string + i); i++)
		l++;
	for (i = 0; i < l; i++)
	{
		if (*(string + i) != ' ')
		{
			word++;
			i += word_len(string + i);
		}
	}
	return (word);
}

/**
 * strtow - split a string to words
 * @string: string
 * Return: Null or ""
 */

char **strtow(char *string)
{
	char **strs;
	int i = 0;
	int word, w, letter, l;

	if (string == NULL || string[0] == '\0')
		return (NULL);
	word = count_words(string);
	if (word == 0)
		return (NULL);
	strs = malloc(sizeof(char *) * (word + 1));
	if (strs == NULL)
		return (NULL);
	for (w = 0; w < word; w++)
	{
		while (string[i] == ' ')
			i++;
		letter = word_len(string + i);
		strs[w] = malloc(sizeof(char) * (letter + 1));
		if (strs[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strs[w]);
			free(strs);
			return (NULL);
		}
		for (l = 0; l < letter; l++)
			strs[w][l] = string[i++];
		strs[w][l] = '\0';
	}
	strs[w] = NULL;
	return (strs);
}
