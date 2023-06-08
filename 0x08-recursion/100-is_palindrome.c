#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string to lookup
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (is_palindrome_base(s, _strlen_recursion(s), 0));
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
 * is_palindrome_base: base recursion logic
 * @s: the string to lookup
 * @len: the length of the string
 * @i: the index target
 *
 * Return: 1 or 0
 */
int is_palindrome_base(char *s, int len, int i)
{
	if (*(s + i) != *(s + len - (1 + i)))
		return (0);

	if (i >= len / 2)
		return (1);

	return (is_palindrome_base(s, len, i - 1));
}
