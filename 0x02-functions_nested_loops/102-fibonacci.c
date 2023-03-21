#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a0 = 1;
	long int a1 = 2;
	int counter = 0;

	while (counter <= 50)
	{
		if (counter == 50)
			printf("%ld\n", a0 + a1);
		else
			printf("%ld, ", a0 + a1);
		counter++;
		a0 = a1;
		a1 = a0 + a1;
	}

	return (0);
}
