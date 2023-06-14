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
	int total_length = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (*(*(av + i) + j) != '\0')
		{
			total_length++;
			j++;
		}

		total_length++;
		i++;
		j = 0;
	}

	new_string = (char *) malloc(sizeof(char) * total_length);
	if (new_string == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		while (*(*(av + i) + j) != '\0')
			*(new_string + k++) = *(*(av + i) + j++);
		if (i < ac - 1)
			*(new_string + k) = '\n';
		j = 0;
	}

	return (new_string);
}
