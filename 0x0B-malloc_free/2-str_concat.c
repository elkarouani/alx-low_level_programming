#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string to concatinate
 * @s2: string to concatinate with
 *
 * Return: pointer of the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_string;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

	concat_string = (char *) malloc(sizeof(char) * (len1 + len2) + 1);
	if (concat_string == NULL)
		return (NULL);

	while (i < len1)
	{
		*(concat_string + i) = *(s1 + i);
		i++;
	}

	while (j < len2)
	{
		*(concat_string + i) = *(s2 + j);
		i++;
		j++;
	}

	*(concat_string + i) = '\0';
	return (concat_string);
}
