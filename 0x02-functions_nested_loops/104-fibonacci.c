#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int j1, j2, k1, k2;
	int index;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;

	printf("%lu", n1);

	for (index = 1; index < 91; index++)
	{
		printf(", %lu", k);
		n2 = n2 + n1;
		n1 = n2 - n1;
	}

	j1 = n1 / 1000000000;
	j2 = n1 % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (index = 92; index < 99; ++index)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
