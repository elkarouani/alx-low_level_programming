#include <stdlib.h>
#include "main.h"

/** create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the created array
 * @c: the character to fill with it
 *
 * Return: pointer of the array, or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	new_array = (char *) malloc(sizeof(char) * size);
	if (new_array == NULL)
		return (NULL);

	while (i < size)
	{
		*(new_array + i) = c;
		i++;
	}

	*(new_array + i) = '\0';
	return new_array;
}
