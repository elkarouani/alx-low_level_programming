#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sumof3s = 0;
	unsigned long int sumof5s = 0; 
	unsigned long int total = 0;
	int index;

	for (index = 0; index < 1024; ++index)
	{
		if ((index % 3) == 0)
			sumof3s = sumof3s + index;
		else if ((index % 5) == 0)
			sumof5s = sumof5s + index;
	}
	total = sumof3s + sumof5s;
	printf("%lu\n", total);
	return (0);
}
