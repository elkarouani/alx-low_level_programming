#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * Return: 0 if exited properly, non-zero otherwise
 */
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
