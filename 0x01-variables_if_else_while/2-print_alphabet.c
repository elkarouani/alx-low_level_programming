#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	for (char character; character <= 'z'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
