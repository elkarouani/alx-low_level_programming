#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if a random number is positive or negative
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		print("0 is zero\n");
	return (0);
}
