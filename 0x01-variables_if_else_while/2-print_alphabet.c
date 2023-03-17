#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char character;
	for (character; character <= 'z'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
