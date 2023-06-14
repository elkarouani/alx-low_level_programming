#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: the string to be splited
 *
 * Return: pointer of splitted words array, or NULL if it fails
 */
char **strtow(char *str)
{
	char **splited_words;
	char *current_word;
	char delimiter = ' ';
	int detect_delimiter = 0;
	int words_count = 0;
	int len = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + len) != '\0')
	{
		if (*(str + len++) == delimiter)
			detect_delimiter = 1;
		else if (detect_delimiter == 1)
		{
			detect_delimiter = 0;
			words_count++;
		}
	}
	if (words_count == 0)
		return (NULL);

	splited_words = (char **) malloc(sizeof(char *) * (words_count + 1));
	if (splited_words == NULL)
		return (NULL);

	while (i < words_count)
	{
		while (j < len)
		{
			if (*(str + j) != delimiter)
				*(current_word + k++) = *(str + j++);
			else
				break;
		}
		if (k == 0)
			continue;
		
		*(splited_words + i) = (char *) malloc(sizeof(char) * k + 1);
		if (*(splited_words + i) == NULL)
			return (NULL);
			
		*(current_word + k++) = '\0';
		*(splited_words + i++) = current_word;

		k = 0;
		current_word = NULL;
	}

	*(splited_words + words_count + 1) = NULL;
	return (splited_words);
}
