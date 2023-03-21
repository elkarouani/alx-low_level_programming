#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int index;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int n;
	unsigned long int sum = 0;

	for (index = 1; index <= 33; ++index)
	{
		if (n1 < 4000000 && (n1 % 2) == 0)
			sum += n1;
		n = n1 + n2;
		n1 = n2;
		n2 = n;
	}

	printf("%lu\n", sum);

	return (0);
}
