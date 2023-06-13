#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicated
 *
 * Return: pointer of the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup_string;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + len) != '\0')
		len++;

	dup_string = (char *) malloc(sizeof(char) * len + 1);
	if (dup_string == NULL)
		return (NULL);

	while (i < len)
	{
		*(dup_string + i) = *(str + i);
		i++;
	}

	*(dup_string + i) = '\0';
	return (dup_string);
}
