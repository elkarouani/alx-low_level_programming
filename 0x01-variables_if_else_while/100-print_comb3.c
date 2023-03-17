#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int number;

	for (number = 1; number < 100; number++)
	{
		if (number < 10)
		{
			putchar('0');
			putchar(48 + number);
		}
		if (number >= 10 && number % 10 != 0 && (number / 10) % 10 < number % 10)
			putchar(48 + number);
	}
	putchar('\n');
	return (0);
}
