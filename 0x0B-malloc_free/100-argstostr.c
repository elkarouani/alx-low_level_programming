#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: length of arguments
 * @av: arguments list
 *
 * Return: the pointer of the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *new_string;
	int i = 1;

	if (ac <= 0 || av == NULL)
		return (NULL);

	new_string = *(av);
	/*
	while (i < ac)
	{
		new_string = str_concat(new_string, *(av + i++));
		if (new_string == NULL)
			return (NULL);
	}
	*/

	return (new_string);
}

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

	while (s1 && *(s1 + len1) != '\0')
		len1++;
	while (s2 && *(s2 + len2) != '\0')
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

	return (concat_string);
}
