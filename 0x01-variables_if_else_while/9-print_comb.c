#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(48 + number);
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
