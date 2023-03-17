#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercas
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int number;
	char character;

	for (number = 0; number < 10; number++)
		putchar(48 + number);
	for (character = 'a'; character <= 'f'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
