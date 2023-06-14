#include <stdlib.h>
#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @s: string to lookup
 *
 * Return: number of words
 */
int count_words(char *s)
{
	int capt_separator = 0;
	int words_count = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == ' ')
			capt_separator = 0;
		else if (capt_separator == 0)
		{
			capt_separator = 1;
			words_count++;
		}
	}

	return (words_count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **splited_words, *tmp;
	int i, k = 0, len = 0, words_count, c = 0, start, end;

	while (*(str + len))
		len++;

	words_count = count_words(str);
	if (words_count == 0)
		return (NULL);

	splited_words = (char **) malloc(sizeof(char *) * (words_count + 1));
	if (splited_words == NULL)
		return (NULL);

	*(splited_words + k) = NULL;

	return (splited_words);
}
