#include "main.h"

/** wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: the string to be compared to second string
 * @s2: the string to be compared to first string
 *
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (_strlen_recursion(s1) != _strlen_recursion(s2))
		return (0);

	if (_strlen_recursion(s1) == 0)
		return (1);
	
	return (wildcmp_base(s1, s2, _strlen_recursion(s1));	
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to lookup its length
 *
 * Return: length of the input string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * wildcmp_base - base recursion logic
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * @len: the length of the strings
 *
 * Return: 1 or 0
 */
int wildcmp_base(char *s1, char *s2, int len)
{
	if (len < 0)
		return (1);

	if (*(s1 + len - 1) != (s2 + len - 1))
		return (0);

	return (wildcmp_base(s1, s2, len - 1));
}
