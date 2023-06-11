#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: String to be concatinated
 * @src: String to concatinate with
 * Return: result of concatination
 */
char *_strcat(char *dest, char *src)
{
	int destLength = 0;
	int srcLength = 0;

	while (dest[destLength] != '\0')
		destLength++;
	while (src[srcLength] != '\0')
	{
		dest[destLength] = src[srcLength];
		destLength++;
		srcLength++;
	}
	dest[destLength] = '\0';
	return (dest);
}
