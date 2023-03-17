#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then in uppercase
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);
	for (character = 'A'; character <= 'Z'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
