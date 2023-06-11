#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String to be compared
 * @s2: String to compared with
 * Return:
 * 0, if the s1 and s2 are equal
 * a negative value if s1 is less than s2
 * a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
