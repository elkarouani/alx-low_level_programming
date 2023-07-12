#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number to be converted
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int digit;
	int base2_counter = 1;
	int len = 0;
	int i;

	if (!b)
		return (0);

	while (b && *(b + len) != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		digit = (unsigned int)(*(b + i)) - '0';

		if (digit != 0 || digit != 1)
			return (0);

		result += digit * base2_counter;
		base2_counter *= 2;
	}

	return (result);
}
