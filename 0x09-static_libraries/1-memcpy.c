#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: bytes count to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
