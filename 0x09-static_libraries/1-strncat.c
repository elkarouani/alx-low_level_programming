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
	int srcLength = 0;

	while (dest[destLength] != '\0')
		destLength++;
	while (src[srcLength] != '\0' && srcLength < n)
	{
		dest[destLength] = src[srcLength];
		destLength++;
		srcLength++;
	}
	dest[destLength] = '\0';
	return (dest);
}
