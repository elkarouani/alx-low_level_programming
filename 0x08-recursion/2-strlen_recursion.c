#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check its length
 * Return: the length of the requested string
 */
int _strlen_recursion(char *s)
{
	return (*s == '\0' ? 0 : 1 + _strlen_recursion(s + 1));
}
