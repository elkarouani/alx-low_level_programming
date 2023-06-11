#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: arguments pased by the program
 *
 * Return: 0 (exit with success) or 1 (exit with error)
 */
int main(int argc, char **argv)
{
	int i;
	int change_count = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int cents = 0;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (cents >= coins[i])
			{
				cents -= coins[i];
				change_count++;
				break;
			}
		}
	}

	printf("%d\n", change_count);
	return (0);
}

