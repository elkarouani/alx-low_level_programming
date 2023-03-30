#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: String to be concatinated
 * @src: String to concatinate with
 * @n : Number of chars to be added from src
 * Return: Result of the concatination
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLength = 0;
	int index;

	while (dest[destLength] != '\0')
		destLength++;
	for (index = 0; index < n; index++)
	{
		dest[destLength] = src[index];
		destLength++;
	}
	dest[destLength] = '\0';
	return (dest);
}
