#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: 0 if exited properly, non-zero otherwise
 */
void print_alphabet(void)
{
	for (char character = 'a'; character <= 'z'; charachter++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
