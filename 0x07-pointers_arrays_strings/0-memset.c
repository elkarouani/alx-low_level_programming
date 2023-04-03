#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: the pointer of the memory area
 * @b: constant byte
 * @n: the bytes count to fill in
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
