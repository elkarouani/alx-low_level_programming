#include <stdlib.h>
#include "main.h"

/**
 * count_words - counts possible space splited words
 * @s: string to lookup
 *
 * Return: number of possible words
 */
int count_words(char *s)
{
	int detect_delimiter = 0;
	int words_count = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i++) == ' ')
			detect_delimiter = 0;
		else if (detect_delimiter == 0)
		{
			detect_delimiter = 1;
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
	char **splited_words, *current_word;
	int i, k = 0, len = 0, words_count, c = 0, start, end;

	while (*(str + len))
		len++;
	words_count = count_words(str);
	if (words_count == 0)
		return (NULL);

	splited_words = (char **) malloc(sizeof(char *) * (words_count + 1));
	if (splited_words == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (*(str + i) == ' ' || *(str + i) == '\0')
		{
			if (c)
			{
				end = i;
				current_word = (char *) malloc(sizeof(char) * (c + 1));
				if (current_word == NULL)
					return (NULL);
				while (start < end)
					*current_word++ = *(str + start++);
				*current_word = '\0';
				*(splited_words + k) = current_word - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	*(splited_words + k) = NULL;
	return (splited_words);
}
