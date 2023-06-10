#include <stdio.h>
#include "main.h"

/**
 * main - main program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: arguments passed by the program
 *
 * Return: 0 (exit with success)
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i <= argc - 1)
		printf("%s\n", argv[i]);

	return (0);
}
