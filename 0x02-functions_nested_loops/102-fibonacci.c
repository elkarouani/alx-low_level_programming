#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int n = n1 + n2;
	int counter = 2;

	printf("1, 2, ");
	while (counter < 50)
	{
		n = n1 + n2;
		printf(counter < 49 ? "%ld\n" : "%ld, ", n);
		counter++;
		n1 = n2;
		n2 = n;
	}

	return (0);
}
