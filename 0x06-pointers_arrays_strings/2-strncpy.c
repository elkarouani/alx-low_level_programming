#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 * @n: the maximum number of characters to be copied
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
