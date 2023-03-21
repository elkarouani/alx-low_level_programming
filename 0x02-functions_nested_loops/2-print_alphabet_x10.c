#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: null
 */
void print_alphabet_x10(void)
{
	int times;
	char character;

	for (times = 1; times <= 10; times++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
