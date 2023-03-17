#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character != 'q' && character != 'e')
			putchar(character);
	}
	putchar('\n');
	return (0);
}
