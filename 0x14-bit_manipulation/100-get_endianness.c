#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;

	return ((*(char *)&num == 1) ? 1 : 0)
}

