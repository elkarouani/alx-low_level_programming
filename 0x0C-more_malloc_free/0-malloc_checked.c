#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocated_memory;

	allocated_memory = malloc(b);
	if (allocated_memory == NULL)
		exit(98);

	return (allocated_memory);
}
