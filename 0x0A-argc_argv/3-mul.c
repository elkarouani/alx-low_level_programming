#include <stdio.h>
#include "main.h"

/**
 * main - main program that multiplies two numbers
 * @argc: the number of arguments
 * @argv: the arguments passed by the program
 *
 * Return: 0 (exit with success) or 1 (exit with error)
 */
int main(int argc, char **argv)
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", argv[0] * argv[1]);
	return (0);
}
