#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	putchar('\n');
	return (0);
}
