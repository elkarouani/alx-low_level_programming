#include <stdlib.h>
#include "main.h"

/**
 * count_words - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
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
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
